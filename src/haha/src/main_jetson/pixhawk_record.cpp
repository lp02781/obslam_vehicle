#include "ros/ros.h"
#include "../../include/haha/hihi.hpp"
#include <iostream>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "sensor_msgs/NavSatFix.h"
#include "mavros_msgs/VFR_HUD.h"
#include "mavros_msgs/GlobalPositionTarget.h"

using namespace std;

FILE *pixhawk_file;

int number;
float ground_speed;
double compass_hdg;
getTime time_lord;

sensor_msgs::NavSatFix	global_position;

void globalPositionCB(const sensor_msgs::NavSatFix& msg);
void compass_rc_cb(const std_msgs::Float64& msg);
void vfr_hud_cb(const mavros_msgs::VFR_HUD& msg);

int main(int argc, char **argv)
{
	ros::init(argc, argv, "pixhwak_record");
	ros::NodeHandle n;
	
	ros::Subscriber sub_global_position = n.subscribe("/mavros/global_position/global", 1, globalPositionCB);
	ros::Subscriber sub_vfr_hud 		= n.subscribe("/mavros/vfr_hud", 1, vfr_hud_cb);
	ros::Subscriber sub_compass_cb		= n.subscribe("/mavros/global_position/compass_hdg", 8, compass_rc_cb);

	ROS_WARN("NC : pixhawk_record.cpp active");
	
	pixhawk_file = fopen("../pixhawk.txt","w");
	fprintf(pixhawk_file,"no time speed latitude longitude compass\n");
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
		fprintf(pixhawk_file, "%d %s %0.5f %0.9f %0.9f %lf\n", number, time_lord.getYMD().c_str(), ground_speed, global_position.latitude, global_position.longitude, compass_hdg);
		number++;
	}
}

void vfr_hud_cb(const mavros_msgs::VFR_HUD& msg){
	ground_speed = msg.groundspeed;
}

void globalPositionCB(const sensor_msgs::NavSatFix& msg){
	global_position.latitude 	= msg.latitude;
	global_position.longitude 	= msg.longitude;
	global_position.altitude 	= msg.altitude;
}

void compass_rc_cb(const std_msgs::Float64& msg){
	compass_hdg = msg.data;
}
