#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include "../include/haha/hihi.hpp"

using namespace cv;
Mat image;

int main(int argc, char** argv)
{
	ros::init(argc, argv, "image_front");
	ros::NodeHandle nh;
	image_transport::ImageTransport it(nh);
	image_transport::Publisher pub = it.advertise("/camera/IR", 1, true);
	
	ROS_WARN("NC : image_front.cpp active");
	
	VideoCapture cap(infrared_number); 
	if(!cap.isOpened()){
		ROS_ERROR ("Error opening camera.");	  
		return 1;
	}
	while (nh.ok()) {
		cap.read(image);		
		if(!image.empty()){	
			sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();
			pub.publish(msg);
		}
		ros::spinOnce();
	}
}
