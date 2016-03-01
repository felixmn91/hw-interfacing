#!/usr/bin/env python

#python
import sys
import time

#ros
import rospy
import roslib
import std_msgs.msg

from sensor_msgs.msg import Imu

def imu_interface():

    imu_pub = rospy.Publisher('test_imu', Imu, queue_size=10)

    rospy.init_node('imu_interface', anonymous=True)
    rate = rospy.Rate(10) # 10hz

    while not rospy.is_shutdown():

        #test_imu
        imu = Imu()
        imu.header = std_msgs.msg.Header()
        imu.header.frame_id = "odom"
        imu.header.stamp = rospy.Time.now()

        imu_pub.publish(imu)

        rate.sleep()

if __name__ == '__main__':
    try:
        imu_interface()
    except rospy.ROSInterruptException:
        pass
