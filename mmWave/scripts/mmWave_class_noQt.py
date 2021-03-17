#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import String
import os
import time
import sys
import socket
import serial
import pdb
import struct
import numpy as np
# import RadarRT_lib
from circular_buffer import ring_buffer
import Queue
from  ctypes import *
from radar_config import dict_to_list


class mmWave_Sensor():
    iwr_rec_cmd = ['sensorStop', 'sensorStart']
    # dca1000evm configuration commands; only the ones used are filled in
    # TODO: hardcoded comand values should be changed
    dca_cmd = { \
        'RESET_FPGA_CMD_CODE'               : b"", \
        'RESET_AR_DEV_CMD_CODE'             : b"", \
        'CONFIG_FPGA_GEN_CMD_CODE'          : b"\x5a\xa5\x03\x00\x06\x00\x01\x01\x01\x02\x03\x1e\xaa\xee", \
        'CONFIG_EEPROM_CMD_CODE'            : b"", \
        'RECORD_START_CMD_CODE'             : b"\x5a\xa5\x05\x00\x00\x00\xaa\xee", \
        'RECORD_STOP_CMD_CODE'              : b"\x5a\xa5\x06\x00\x00\x00\xaa\xee", \
        'PLAYBACK_START_CMD_CODE'           : b"", \
        'PLAYBACK_STOP_CMD_CODE'            : b"", \
        'SYSTEM_CONNECT_CMD_CODE'           : b"\x5a\xa5\x09\x00\x00\x00\xaa\xee", \
        'SYSTEM_ERROR_CMD_CODE'             : b"\x5a\xa5\x0a\x00\x01\x00\xaa\xee", \
        'CONFIG_PACKET_DATA_CMD_CODE'       : b"\x5a\xa5\x0b\x00\x06\x00\xc0\x05\xc4\x09\x00\x00\xaa\xee", \
        'CONFIG_DATA_MODE_AR_DEV_CMD_CODE'  : b"", \
        'INIT_FPGA_PLAYBACK_CMD_CODE'       : b"", \
        'READ_FPGA_VERSION_CMD_CODE'        : b"\x5a\xa5\x0e\x00\x00\x00\xaa\xee", \
    }

    dca_cmd_addr = ('192.168.33.180', 4096)
    dca_socket = None
    data_socket = None
    iwr_serial = None

    dca_socket_open = False
    data_socket_open = False
    serial_open = False

    capture_started = 0

    data_file = None

    def __init__(self, iwr_cmd_tty='/dev/ttyACM0', iwr_data_tty='/dev/ttyACM1'):

        self.data_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.data_socket.bind(("192.168.33.30", 4098))
        self.data_socket.settimeout(25e-5)
        #self.data_socket.setblocking(True)
        self.data_socket_open = True

        self.seqn = 0  # this is the last packet index
        self.bytec = 0 # this is a byte counter
        self.q = Queue.Queue()
        frame_len = 2*rospy.get_param('iwr_cfg/profiles')[0]['adcSamples']*rospy.get_param('iwr_cfg/numLanes')*rospy.get_param('iwr_cfg/numChirps')
        self.data_array = ring_buffer(int(2*frame_len), int(frame_len))


        self.iwr_cmd_tty=iwr_cmd_tty
        self.iwr_data_tty=iwr_data_tty

    def close(self):
        self.dca_socket.close()
        self.data_socket.close()
        self.iwr_serial.close()

    def collect_response(self):
        status = 1
        while status:
            try:
                msg, server = self.dca_socket.recvfrom(2048)
                import struct
                (status,) = struct.unpack('<H', msg[4:6])

                if status == 898:
                    break
            except Exception as e:
                print(e)
                continue

    def collect_arm_response(self):
        status = 1
        while status:
            try:
                msg, server = self.dca_socket.recvfrom(2048)
                if msg == self.dca_cmd['SYSTEM_ERROR_CMD_CODE']:
                    break
            except Exception as e:
                print(e)
                continue

    def setupDCA_and_cfgIWR(self):
        self.dca_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.dca_socket.bind(("192.168.33.30", 4096))
        self.dca_socket.settimeout(10)
        self.dca_socket_open = True

        self.iwr_serial = serial.Serial(port=self.iwr_cmd_tty, baudrate=115200, bytesize=serial.EIGHTBITS,
                                        parity=serial.PARITY_NONE, stopbits=serial.STOPBITS_ONE, timeout=0.100)
        self.serial_open = self.iwr_serial.is_open

        if not self.dca_socket or not self.iwr_serial:
            return

        # Set up DCA
        print("SET UP DCA")
        self.dca_socket.sendto(self.dca_cmd['SYSTEM_CONNECT_CMD_CODE'], self.dca_cmd_addr)
        import sys
        print(sys.version)
        self.collect_response()
        self.dca_socket.sendto(self.dca_cmd['READ_FPGA_VERSION_CMD_CODE'], self.dca_cmd_addr)
        self.collect_response()
        self.dca_socket.sendto(self.dca_cmd['CONFIG_FPGA_GEN_CMD_CODE'], self.dca_cmd_addr)
        self.collect_response()
        self.dca_socket.sendto(self.dca_cmd['CONFIG_PACKET_DATA_CMD_CODE'], self.dca_cmd_addr)
        self.collect_response()
        print("")

        # configure IWR
        print("CONFIGURE IWR")
        iwr_cfg_cmd = dict_to_list(rospy.get_param('iwr_cfg'))
        # Send and read a few CR to clear things in buffer. Happens sometimes during power on
        for i in range(5):
            self.iwr_serial.write('\r'.encode())
            self.iwr_serial.reset_input_buffer()
            time.sleep(.1)

        for cmd in iwr_cfg_cmd:
            for i in range(len(cmd)):
                self.iwr_serial.write(cmd[i].encode('utf-8'))
                time.sleep(0.010)  # 10 ms delay between characters
            self.iwr_serial.write('\r'.encode())
            self.iwr_serial.reset_input_buffer()
            time.sleep(0.010)       # 10 ms delay between characters
            time.sleep(0.100)       # 100 ms delay between lines
            response = self.iwr_serial.read(size=6)
            print('LVDS Stream:/>' + cmd)
            print(response[2:].decode())
        print("")

    def arm_dca(self):
        if not self.dca_socket:
            return

        print("ARM DCA")
        self.dca_socket.sendto(self.dca_cmd['RECORD_START_CMD_CODE'], self.dca_cmd_addr)
        self.collect_arm_response()
        print("success!")
        print("")

    def toggle_capture(self, toggle=0, dir_path=''):
        if not self.dca_socket or not self.iwr_serial:
            return

        # only send command if toggle != status of capture
        if toggle == self.capture_started:
            return

        sensor_cmd = self.iwr_rec_cmd[toggle]
        for i in range(len(sensor_cmd)):
            self.iwr_serial.write(sensor_cmd[i].encode('utf-8'))
            time.sleep(0.010)   #  10 ms delay between characters
        self.iwr_serial.write('\r'.encode())
        self.iwr_serial.reset_input_buffer()
        time.sleep(0.010)       #  10 ms delay between characters
        time.sleep(0.100)       # 100 ms delay between lines
        response = self.iwr_serial.read(size=6)
        print('LVDS Stream:/>' + sensor_cmd)
        print(response.decode('utf-8'))

        if sensor_cmd == 'sensorStop':
            self.dca_socket.sendto(self.dca_cmd['RECORD_STOP_CMD_CODE'], self.dca_cmd_addr)
            self.collect_response()

        self.capture_started = toggle

    def collect_data(self):
        try:
            msg, server = self.data_socket.recvfrom(2048)

        except Exception as e:
            print(e)
            return

        #self.data_file.write(msg)  # keep to compare rosbag with binary here
        seqn, bytec = struct.unpack('<IIxx', msg[:10])
        ##print( 'PYTHON: ' + str(self.seqn) + ' ' + str(seqn) )
        ## print str(self.seqn) + ' ' + str(seqn) #+ ' ' + str(q.qsize())
        #py_time_start = time.clock()
        #if self.seqn + 1 != seqn:
        #    print("@seq {}-{}: ".format(self.seqn, seqn))
        #    # make for queue below
        #    num_zeros = c_longlong((seqn - self.seqn - 1) * 728)
        #    print ('num zeros ',num_zeros.value)
        #    #num_zeros = (bytec - self.bytec - 1456)//2 #numer of samples not bytes
        #    self.data_array.add_zeros(num_zeros)
        #self.data_array.add_msg(np.frombuffer(msg[10:], dtype=np.int16))
        #py_time_end = time.clock()

        self.data_array.pad_and_add_msg(self.seqn, seqn, np.frombuffer(msg[10:], dtype=np.int16))
        #c_time_end = time.clock()

        #print("Python took " + str(py_time_end - py_time_start) + ", c took " + str(c_time_end - py_time_end) )

        self.seqn = seqn
        self.bytec = bytec
