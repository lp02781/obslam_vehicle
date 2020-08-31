#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "../include/haha/hihi.hpp"
#include <iostream>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "sensor_msgs/NavSatFix.h"
#include "mavros_msgs/VFR_HUD.h"
#include "mavros_msgs/GlobalPositionTarget.h"

using namespace std;
using namespace cv;

FILE *lidar_file;
FILE *range_file;

int range_size, count_ranges, countless_ranges, number;
float ground_speed;
double compass_hdg;
getTime time_lord;

Mat receive_image;
Mat ir_image;
Size framesize(640,480);
VideoWriter oVideoWriter("../front.avi",CV_FOURCC('P','I','M','1'),20, framesize);
VideoWriter irVideoWriter("../ir.avi",CV_FOURCC('P','I','M','1'),20, framesize);

void globalPositionCB(const sensor_msgs::NavSatFix& msg);
void record_lidar_cb(const sensor_msgs::LaserScan& lidar);
void vfr_hud_cb(const mavros_msgs::VFR_HUD& msg);
void imageProcessing(Mat input_image);
void irProcessing(Mat ir_image);
void compass_rc_cb(const std_msgs::Float64& msg);

sensor_msgs::NavSatFix	global_position;

void imageCallback(const sensor_msgs::CompressedImageConstPtr& msg)
{
  try
  {
    receive_image = cv::imdecode(cv::Mat(msg->data),1);//convert compressed image data to cv::Mat
    waitKey(10); 
    imageProcessing(receive_image);
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert to image!");
  }
}
void irCallback(const sensor_msgs::CompressedImageConstPtr& msg)
{
  try
  {
    ir_image = cv::imdecode(cv::Mat(msg->data),1);//convert compressed image data to cv::Mat
    waitKey(10); 
    irProcessing(ir_image);
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert to image!");
  }
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "image_display");
	ros::NodeHandle n;
	image_transport::ImageTransport it(n);
	
	ros::Subscriber sub_camera 			= n.subscribe("/camera/image/compressed", 1, imageCallback);
	ros::Subscriber sub_ir 				= n.subscribe("/camera/IR/compressed", 1, irCallback);
	ros::Subscriber sub_record_lidar	= n.subscribe("/scan", 8, record_lidar_cb);
	ros::Subscriber sub_global_position = n.subscribe("/mavros/global_position/global", 1, globalPositionCB);
	ros::Subscriber sub_vfr_hud 		= n.subscribe("/mavros/vfr_hud", 1, vfr_hud_cb);
	ros::Subscriber sub_compass_cb		= n.subscribe("/mavros/global_position/compass_hdg", 8, compass_rc_cb);

	ROS_WARN("NC : image_display.cpp active");
	
	lidar_file = fopen("../lidar.txt","w");
	range_file = fopen("../range.txt","w");
	fprintf(lidar_file,"no time speed latitude longitude compass angle_min angle_max angle_increment time_increment scan_time range_min range_max range_size countless count\n");
	fprintf(range_file,"no time speed latitude longitude \n");
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
	}
}

void imageProcessing(Mat input_image){
	stringstream sa;
	stringstream sb;
	stringstream sc;
	stringstream sd;
	stringstream se;
	stringstream sf;
	
	sa << ground_speed;
	string str = sa.str();
	sb << global_position.latitude;
	string latitude = sb.str();
    sc << global_position.longitude;
	string longitude = sc.str();
	sd << count_ranges;
	string count_ranges_ss= sd.str();
	se << countless_ranges;
	string countless_ranges_ss = se.str();
	sf << compass_hdg;
	string compass_hdg_ss= sf.str();
	
    putText(input_image, time_lord.getYMD(), Point(0,30), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, str, Point(0,60), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, latitude, Point(0,90), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, longitude, Point(0,120), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, compass_hdg_ss, Point(0,150), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, count_ranges_ss, Point(0,180), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, countless_ranges_ss, Point(0,210), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	imshow("Input_front", input_image);
	oVideoWriter.write(input_image);
}

void irProcessing(Mat input_image){
	stringstream sa;
	stringstream sb;
	stringstream sc;
	stringstream sd;
	stringstream se;
	stringstream sf;
	
	sa << ground_speed;
	string str = sa.str();
	sb << global_position.latitude;
	string latitude = sb.str();
    sc << global_position.longitude;
	string longitude = sc.str();
	sd << count_ranges;
	string count_ranges_ss= sd.str();
	se << countless_ranges;
	string countless_ranges_ss = se.str();
	sf << compass_hdg;
	string compass_hdg_ss= sf.str();
	
    putText(input_image, time_lord.getYMD(), Point(0,30), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, str, Point(0,60), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, latitude, Point(0,90), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, longitude, Point(0,120), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, compass_hdg_ss, Point(0,150), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, count_ranges_ss, Point(0,180), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	putText(input_image, countless_ranges_ss, Point(0,210), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	imshow("Input_IR", input_image);
	irVideoWriter.write(input_image);
}

void record_lidar_cb(const sensor_msgs::LaserScan& lidar){
	count_ranges=0;
	countless_ranges=0;
	range_size = sizeof(lidar.ranges);
	for(int j=0; j<range_size;j++){
		if(lidar.ranges[j] == std::numeric_limits<float>::infinity()){count_ranges++;}
		else{countless_ranges++;}
	}
	
	fprintf(lidar_file, "%d %s %0.5f %0.9f %0.9f %lf %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %d %d %d\n", number, time_lord.getYMD().c_str(), ground_speed, global_position.latitude, global_position.longitude, compass_hdg, lidar.angle_min, lidar.angle_max, lidar.angle_increment, lidar.time_increment, lidar.scan_time, lidar.range_min, lidar.range_max, range_size, count_ranges, countless_ranges);
	
	fprintf(range_file, "%d %s %0.5f %0.9f %0.9f ", number, time_lord.getYMD().c_str(), ground_speed, global_position.latitude, global_position.longitude);
	for(int i=0; i<range_size;i++){
		fprintf(range_file,"%0.5f ", lidar.ranges[i]);
	}
	fprintf(range_file,"\n");
	number++;
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

