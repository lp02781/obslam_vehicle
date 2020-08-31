#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "../../include/haha/hihi.hpp"
#include <iostream>
#include <stdio.h>
#include "std_msgs/Float64.h"

using namespace std;

FILE *lidar_file;

int range_size, count_ranges, countless_ranges, number;
getTime time_lord;

void record_lidar_cb(const sensor_msgs::LaserScan& lidar);

int main(int argc, char **argv)
{
	ros::init(argc, argv, "image_display");
	ros::NodeHandle n;
	
	ros::Subscriber sub_record_lidar	= n.subscribe("/scan", 8, record_lidar_cb);
	
	ROS_WARN("NC : image_display.cpp active");
	
	lidar_file = fopen("../lidar.txt","w");
	fprintf(lidar_file,"no time angle_min angle_max angle_increment time_increment scan_time range_min range_max range_size countless count\n");
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
	}
}

void record_lidar_cb(const sensor_msgs::LaserScan& lidar){
	count_ranges=0;
	countless_ranges=0;
	range_size = sizeof(lidar.ranges);
	for(int j=0; j<range_size;j++){
		if(lidar.ranges[j] == std::numeric_limits<float>::infinity()){count_ranges++;}
		else{countless_ranges++;}
	}
	
	fprintf(lidar_file, "%d %s %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %d %d %d ", number, time_lord.getYMD().c_str(), lidar.angle_min, lidar.angle_max, lidar.angle_increment, lidar.time_increment, lidar.scan_time, lidar.range_min, lidar.range_max, range_size, count_ranges, countless_ranges);
	
	for(int i=0; i<range_size;i++){
		fprintf(lidar_file,"%0.5f ", lidar.ranges[i]);
	}
	fprintf(lidar_file,"\n");
	number++;
}
