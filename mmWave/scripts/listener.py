#!/usr/bin/env python
import rospy
from mmWave.msg import data_frame
from rospy.numpy_msg import numpy_msg
import numpy as np

def callback(data):
    print(data.data)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber("radar_data", numpy_msg(data_frame), callback)
    rospy.spin()

if __name__ == '__main__':
    listener()