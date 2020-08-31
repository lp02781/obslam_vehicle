#include "ros/ros.h"
#include "../../include/haha/hihi.hpp"
#include <iostream>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <stdio.h>
#include "std_msgs/Float64.h"

using namespace std;
using namespace cv;

Mat receive_image;
Mat ir_image;

void imageProcessing(Mat input_image);
void irProcessing(Mat ir_image);

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

	ROS_WARN("NC : image_display.cpp active");
	
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
	}
}

void imageProcessing(Mat input_image){
	imshow("Input_front", input_image);
}

void irProcessing(Mat input_image){
	imshow("Input_IR", input_image);
}
