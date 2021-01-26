//make dir
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make

//create packages
cd ~/catkin_ws/src
catkin_create_pkg beginner_tutorials std_msgs rospy roscpp

//available pkgs
//check
rospack depends1 rospy
//ava
rospack depends beginner_tutorials

//make
// In a catkin workspace
catkin_make --source my_src
catkin_make install --source my_src  # (optionally)
//go to dir that contain src file
catkin_make

//cmds
//find pkgs
rospack find roscpp
//go to pkg path
roscd roscpp
pwd
//ls a pkg
rosls roscpp_tutorials
/tap
TAB

//to start
roscore
//check node
rosnode info /rosout
//run a node 
rosrun turtlesim turtlesim_node
//change node name
rosrun turtlesim turtlesim_node __name:=my_turtle
//read info from a node
rosnode ping my_turtle

//possible cmds & topics
rostopic 
//get data
rostopic echo /turtle1/cmd_vel
rostopic echo /turtle1/pose
//check topics
rostopic list -v
//check node data types
rostopic type /turtle1/cmd_vel
//check msg type
rosmsg show geometry_msgs/Twist

//publich a msg to a topic
rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 1.8]'
//-1 : one msg
//topic: /turtle1/cmd_vel
//msg type: geometry_msgs/Twist
//options: --
//data: ' '
//for a rec cmd
rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, -1.8]'
//plot
rqt
plugins->Visualization->Plot
