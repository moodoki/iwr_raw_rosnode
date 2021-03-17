import os
import numpy as np
import Queue
from ctypes import *
from numpy.ctypeslib import ndpointer
import threading
import rospkg


class ring_buffer:
    def __init__(self, max_len, frame_size, dtype=np.int16):
        self.max_len = c_int64(max_len)
        self.data = np.zeros(max_len, dtype=dtype)
        self.queue = Queue.Queue()
        self.put_idx = c_int64(0)
        self.frame_size = c_int64(frame_size)
        self.pop_array = c_int16(-1)
        self.total = []

        if max_len % frame_size == 0:
            self.n_frames = max_len / frame_size
        else:
            raise ValueError("Must be multiple of frame size")
        rospack = rospkg.RosPack()
        script_path = os.path.join(rospack.get_path('mmWave'), 'scripts')

        self.c_file = CDLL('libcbuffer.so')

        self.c_file.add_zeros.argtypes = [
                                            c_int64,
                                            ndpointer(c_int16, flags="C_CONTIGUOUS"),
                                            c_int64,
                                            POINTER(c_int64),
                                            c_int64,
                                            POINTER(c_int16)
                                         ]

        self.c_file.add_msg.argtypes =   [
                                            ndpointer(c_int16, flags="C_CONTIGUOUS"),
                                            c_int16,
                                            ndpointer(c_int16, flags="C_CONTIGUOUS"),
                                            c_int64,
                                            POINTER(c_int64),
                                            c_int64,
                                            POINTER(c_int16)
        ]

        self.c_file.pad_and_add_msg.argtypes = [
            c_int64,
            c_int64,
            ndpointer(c_int16, flags="C_CONTIGUOUS"),
            c_int16,
            ndpointer(c_int16, flags="C_CONTIGUOUS"),
            c_int64,
            POINTER(c_int64),
            c_int64,
            POINTER(c_int16)
        ]


    def add_zeros(self,num_zeros):
        self.c_file.add_zeros(num_zeros,
                              self.data,
                              self.max_len,
                              byref(self.put_idx),
                              self.frame_size,
                              byref(self.pop_array))
        self.add_to_queue()

    def add_msg(self, msg):

        self.c_file.add_msg(msg,
                            len(msg),
                            self.data,
                            self.max_len,
                            byref(self.put_idx),
                            self.frame_size,
                            byref(self.pop_array))
        self.add_to_queue()

    def pad_and_add_msg(self, seq_c, seq_n, msg):
        self.c_file.pad_and_add_msg(seq_c,
                                    seq_n,
                                    msg,
                                    len(msg),
                                    self.data,
                                    self.max_len,
                                    byref(self.put_idx),
                                    self.frame_size,
                                    byref(self.pop_array))
        self.add_to_queue()

    def add_to_queue(self):
        if self.pop_array.value != -1:
            data = self.data[self.frame_size.value * self.pop_array.value:self.frame_size.value * (self.pop_array.value + 1)].copy()
            self.queue.put(data)
