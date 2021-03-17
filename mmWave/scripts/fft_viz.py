#!/usr/bin/env python
import rospy
from mmWave.msg import data_frame
from rospy.numpy_msg import numpy_msg
import numpy as np
import cv2
import sys
import threading
import pprint

VERBOSE=False

class FrameBuffer():
    #DoubleBuffer for for vis
    def __init__(self, framesize=(256,256)):
        self.buff = [np.zeros(framesize),
                     np.zeros(framesize),
                    ]

        self.dirty = True
        self.frontbuff = 0

    def write_frame(self, new_frame):
        backbuff = (self.frontbuff+1)%2
        self.buff[backbuff] = new_frame
        self.frontbuff = backbuff
        self.dirty = True

    def get_frame(self):
        d = self.dirty
        self.dirty = False
        return d, self.buff[self.frontbuff]

def normalize_and_color(data, max_val=0, cmap=None):
    if max_val <= 0:
        max_val = np.max(data)

    img = (data/max_val * 255).astype(np.uint8)
    if cmap:
        img = cv2.applyColorMap(img, cmap)
    return img


def imshow_thread(framebuffer, max_val=18.0, cmap=cv2.COLORMAP_WINTER):
    #k = cv2.waitKey(1)

    cv2.namedWindow('fft_viz', cv2.WINDOW_FREERATIO)

    ax = 2

    while not rospy.is_shutdown():
        update, img = framebuffer.get_frame()
        if update:
            img = normalize_and_color(img, max_val, cmap)
            cv2.imshow('fft_viz', img)
        cv2.waitKey(1)

    cv2.destroyAllWindows()


def reshape_frame(data, samples_per_chirp, n_receivers, n_tdm, n_chirps_per_frame):
    _data = data.reshape(-1, 8)
    _data = _data[:, :4] + 1j * _data[:, 4:]
    _data = _data.reshape(n_chirps_per_frame, samples_per_chirp, n_receivers)

    #deinterleve if theres TDM
    if n_tdm > 1:
        _data_i = [_data[i::n_tdm, :, :] for i in range(n_tdm)]
        _data = np.concatenate(_data_i, axis=-1)

    return _data

class mmwave_fftviz:
    def __init__(self, fb):
        self.subscriber = rospy.Subscriber("radar_data", numpy_msg(data_frame), self.callback)
        if VERBOSE:
            print("subscribed to mmwave radar_data")

        self.windowCreated = False
        self.fb = fb
        self.frame_kwargs = None
        self.pp = pprint.PrettyPrinter(width=100)

    def set_radar_cfg(self):
        params = rospy.get_param('iwr_cfg')
        print("Radar Params:")
        self.pp.pprint(params)

        samples_per_chirp = params['profiles'][0]['adcSamples']
        n_tdm = len(params['chirps'])
        n_rx = params['rx1'] + params['rx2'] + params['rx3'] + params['rx4']
        n_chirps_per_frame = params['numChirps']

        self.frame_kwargs = {
            'samples_per_chirp': samples_per_chirp,
            'n_receivers': n_rx,
            'n_tdm': n_tdm,
            'n_chirps_per_frame': n_chirps_per_frame,
        }

        if VERBOSE:
            print(self.frame_kwargs)

    def fft_processs(self, adc_samples):
        fft_range = np.fft.fft(adc_samples, axis=1)
        fft_range_doppler = np.fft.fft(fft_range, axis=0)
        fft_range_azi = np.fft.fft(fft_range_doppler, axis=2)

        #fft_mag = np.log(np.abs(fft_range_azi_cd))
        #return fft_range_azi
        fft_range_azi_cd = np.sum(fft_range_azi, 0)

        fft_mag = np.fft.fftshift(np.log(np.abs(fft_range_doppler[:, :, 0])), axes=0)
        return fft_mag

    def callback(self, data):
        if not self.frame_kwargs:
            self.set_radar_cfg()

        adc_samples = reshape_frame(data.data,
                                    **self.frame_kwargs
                                   )

        fft_mag = self.fft_processs(adc_samples)

        self.fb.write_frame(fft_mag)

def main(args):
    rospy.init_node('fft_viz_listener', anonymous=True)

    fb = FrameBuffer()
    fft_viz = mmwave_fftviz(fb)

    ui_thread = threading.Thread(target=imshow_thread, args=(fb,))
    ui_thread.setDaemon(True)
    ui_thread.start()

    try:
        rospy.spin()
    except KeyboardInterrupt:
        print("End FFTVIZ")

if __name__ == '__main__':
    main(sys.argv)
