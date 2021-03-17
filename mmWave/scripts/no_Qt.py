#!/usr/bin/env python
# license removed for brevity
import rospy
import rospkg
from std_msgs.msg import String
from std_msgs.msg import Int16MultiArray
from mmWave.msg import data_frame
from rospy.numpy_msg import numpy_msg
import os
import time
import sys
import socket
import serial
import pdb
from mmWave_class_noQt import mmWave_Sensor
import Queue
import threading
import pickle
from radar_config import cfg_list_to_dict
import argparse
import json


def collect_data_thread_func(mmwave_sensor):
    """This function will be run on its own thread and will repeatedly check for incoming radar packets"""
    while True:
        if mmwave_sensor.capture_started:
            mmwave_sensor.collect_data()


def check_and_publish_thread_func(mmwave,pub):
    """This function will check if any frames have been completed and subsequently put into a queue. This function
    will publish the contents of the queue."""
    while True:
        if mmwave.capture_started:
            if mmwave.data_array.queue.qsize() > 0:
                pub.publish(mmwave.data_array.queue.get())


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument("cfg", help="select configuration to apply to the radar")
    parser.add_argument('--cmd_tty', default='/dev/ttyACM0',
                        help='''TTY device or serial port for configuration
                        commands''')
    args = parser.parse_args(rospy.myargv()[1:])

    rospy.init_node('radar_collect', anonymous=True)
    pub_radar = rospy.Publisher('radar_data', numpy_msg(data_frame), queue_size=10)
    pub_config = rospy.Publisher('config_string', String, queue_size=10, latch=True)
    time.sleep(2)  # wait for topics to be set up

    #  initial iwr1443boost configuration commands
    configCmds = args.cfg
    rospack = rospkg.RosPack()
    cfgpath = os.path.join(rospack.get_path('mmWave'), 'scripts/configs')
    try:
        with open(os.path.join(cfgpath, args.cfg+'.cfg')) as cfg_file:
            cmd_raw = cfg_file.readlines()
            iwr_cfg_cmd = [x.strip() for x in cmd_raw]
    except IOError as e:
        print("Unable to open config file: {}".format(e.strerror))
        print("Config should be a file in {}".format(cfgpath))
        raise
    
    #TODO: define message with proper fields instead of 1 big string
    pub_config.publish('\n'.join(iwr_cfg_cmd)) # entire config file as a latched topic

    iwr_cfg_dict = cfg_list_to_dict(iwr_cfg_cmd)  # store the config params into dictionary
    rospy.set_param('iwr_cfg', iwr_cfg_dict)  # store config dictionary in param server
    mmwave_sensor = mmWave_Sensor(iwr_cmd_tty=args.cmd_tty)
    mmwave_sensor.setupDCA_and_cfgIWR()

    x = threading.Thread(target=collect_data_thread_func, args=(mmwave_sensor,))
    x.setDaemon(True)
    x.start()

    y = threading.Thread(target=check_and_publish_thread_func, args=(mmwave_sensor,pub_radar,))
    y.setDaemon(True)
    y.start()

    mmwave_sensor.arm_dca()
    time.sleep(2)


    try:
        mmwave_sensor.toggle_capture(toggle=1)
        rate = rospy.Rate(.5)
        rospy.spin()
        mmwave_sensor.toggle_capture(toggle=0)

        mmwave_sensor.close()

        sys.exit(0)

    except rospy.ROSInterruptException:
        mmwave_sensor.toggle_capture(toggle=0)
        mmwave_sensor.close()
        sys.exit(0)
