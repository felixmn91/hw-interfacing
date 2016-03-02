#!/usr/bin/env python

#python
import sys
import time
import serial
import random
import operator

#ros
import rospy
import roslib
import std_msgs.msg

from geometry_msgs.msg import PoseWithCovarianceStamped
from std_msgs.msg import String

def encoder_interface():

    test_pub = rospy.Publisher('test_chatter', String, queue_size=10)
    pose_pub = rospy.Publisher('test_pose', PoseWithCovarianceStamped, queue_size=10)

    rospy.init_node('encoder_interface', anonymous=True)
    rate = rospy.Rate(10) # 10hz

    ser = serial.Serial(
        port='/dev/ttyUSB3',
        baudrate=115200,
        bytesize=8,
        parity=serial.PARITY_NONE,
        stopbits=1,
        #timeout=2,
        xonxoff=False,
        rtscts=False,
        #writetimeout=2,
        dsrdtr=False,
        #interchartimeout=None
    )
    #9600,8,serial.PARITY_NONE,1,2,False,True,2,False,None

    #ser = serial.Serial(
    #    port='/dev/ttyUSB1',
    #    baudrate=9600,
    #    parity='N', #serial.PARITY_ODD #EVEN
    #    stopbits=1, #serial.STOPBITS_ONE #TWO
    #    bytesize=8,
    #    xonxoff=1,
    #    rtscts=0
    #)

    while not rospy.is_shutdown():

        #test_chatter
        hello_str = "hello world %s" % rospy.get_time()
        #rospy.loginfo(hello_str)
        test_pub.publish(hello_str)

        #test_pose
        pose = PoseWithCovarianceStamped()
        pose.header = std_msgs.msg.Header()
        pose.header.frame_id = "odom"
        pose.header.stamp = rospy.Time.now()

        pose.pose.pose.orientation.w = 1
        pose.pose.pose.orientation.x = 1
        pose.pose.pose.orientation.y = 1
        pose.pose.pose.orientation.z = 1

        pose.pose.pose.position.x = 1 + random.random()
        pose.pose.pose.position.y = random.random()
        pose.pose.pose.position.z = random.random()

        try:
            byte = ser.read()
            #print chr(int(byte))
            print repr(byte)
        except Exception, e:
            #print "Failed to read: ", e
            continue

        pose_pub.publish(pose)

        rate.sleep()

if __name__ == '__main__':
    try:
        encoder_interface()
    except rospy.ROSInterruptException:
        pass
