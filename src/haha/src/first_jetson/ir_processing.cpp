#include "ros/ros.h"
#include "../../include/haha/hihi.hpp"
#include <iostream>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "sensor_msgs/NavSatFix.h"

using namespace std;
using namespace cv;

getTime time_lord;

Mat receive_image;

void imageProcessing(Mat input_image);


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

int main(int argc, char **argv)
{
	ros::init(argc, argv, "image_display");
	ros::NodeHandle n;
	image_transport::ImageTransport it(n);
	
	image_transport::Publisher pub = it.advertise("/camera/ir_process", 1, true);
	ros::Subscriber sub_camera 			= n.subscribe("/camera/IR/compressed", 1, imageCallback);

	ROS_WARN("NC : image_display.cpp active");
	
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
		if(!receive_image.empty()){	
			sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", receive_image).toImageMsg();
			pub.publish(msg);
		}
	}
}

void imageProcessing(Mat input_image){	
    putText(input_image, time_lord.getYMD(), Point(0,30), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,255), 2);
	//imshow("Input_RGB", input_image);
}
