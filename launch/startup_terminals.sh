#bin/bash

tab="--tab"
cmds=""

#roscore and tf data
cmds+=($tab -e "bash -c 'roslaunch static_transform_publischer.launch';bash")

#sensors
#cmds+=($tab -e "bash -c 'echo '1q2w3e4r' | sudo -S chmod a+rw /dev/ttyACM0';bash")
#cmds+=($tab -e "bash -c 'rosrun hokuyo_node hokuyo_node';bash")
cmds+=($tab -e "bash -c 'rosrun usb_cam usb_cam_node';bash")

#visualization
cmds+=($tab -e "bash -c 'rosrun rviz rviz';bash")
cmds+=($tab -e "bash -c 'rqt';bash")

gnome-terminal "${cmds[@]}"

exit 0
