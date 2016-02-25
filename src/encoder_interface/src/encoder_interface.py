#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def encoder_interface():
    pub = rospy.Publisher('encoder_odom', String, queue_size=10)
    rospy.init_node('encoder_interface', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time()
        rospy.loginfo(hello_str)
        pub.publish(hello_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        encoder_interface()
    except rospy.ROSInterruptException:
        pass
