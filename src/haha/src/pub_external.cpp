#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "../include/haha/hihi.hpp"
#include <iostream>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "sensor_msgs/NavSatFix.h"
#include "mavros_msgs/VFR_HUD.h"
#include "mavros_msgs/GlobalPositionTarget.h"
//// C library headers
#include <stdio.h>
#include <string.h>

// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

using namespace std;

int serial_port;

int range_size, count_ranges, countless_ranges, number;
int lidar_angle_min, lidar_angle_max, lidar_angle_increment, lidar_time_increment, lidar_scan_time, lidar_range_min, lidar_range_max;

float ground_speed;
double compass_hdg;
getTime time_lord;

void globalPositionCB(const sensor_msgs::NavSatFix& msg);
void record_lidar_cb(const sensor_msgs::LaserScan& lidar);
void vfr_hud_cb(const mavros_msgs::VFR_HUD& msg);
void compass_rc_cb(const std_msgs::Float64& msg);
void serial_publish();

sensor_msgs::NavSatFix	global_position;

int main(int argc, char **argv)
{
	ros::init(argc, argv, "image_display");
	ros::NodeHandle n;
	
	ros::Subscriber sub_record_lidar	= n.subscribe("/scan", 8, record_lidar_cb);
	ros::Subscriber sub_global_position = n.subscribe("/mavros/global_position/global", 1, globalPositionCB);
	ros::Subscriber sub_vfr_hud 		= n.subscribe("/mavros/vfr_hud", 1, vfr_hud_cb);
	ros::Subscriber sub_compass_cb		= n.subscribe("/mavros/global_position/compass_hdg", 8, compass_rc_cb);

	ROS_WARN("NC : image_display.cpp active");
	
	sleep(1);
	
	ros::Rate loop_rate(10);
	
	while (ros::ok()) {	
		ros::spinOnce();
		serial_publish();
		number++;
		loop_rate.sleep();
	}
	close(serial_port);	
}

void serial_publish(){
	serial_port = open("/dev/molina", O_RDWR);

	// Create new termios struc, we call it 'tty' for convention
	struct termios tty;
	memset(&tty, 0, sizeof tty);
	
	/*
	// Read in existing settings, and handle any error
	if(tcgetattr(serial_port, &tty) != 0) {
		printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
	}*/

	tty.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
	tty.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in communication (most common)
	tty.c_cflag |= CS8; // 8 bits per byte (most common)
	tty.c_cflag &= ~CRTSCTS; // Disable RTS/CTS hardware flow control (most common)
	tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

	tty.c_lflag &= ~ICANON;
	tty.c_lflag &= ~ECHO; // Disable echo
	tty.c_lflag &= ~ECHOE; // Disable erasure
	tty.c_lflag &= ~ECHONL; // Disable new-line echo
	tty.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP
	tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
	tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); // Disable any special handling of received bytes

	tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes (e.g. newline chars)
	tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed
	// tty.c_oflag &= ~OXTABS; // Prevent conversion of tabs to spaces (NOT PRESENT ON LINUX)
	// tty.c_oflag &= ~ONOEOT; // Prevent removal of C-d chars (0x004) in output (NOT PRESENT ON LINUX)

	tty.c_cc[VTIME] = 10;    // Wait for up to 1s (10 deciseconds), returning as soon as any data is received.
	tty.c_cc[VMIN] = 0;

	// Set in/out baud rate to be 9600
	cfsetispeed(&tty, B9600);
	cfsetospeed(&tty, B9600);
	
	/*
	// Save tty settings, also checking for error
	if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
		printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
	}
	*/
	
	stringstream sa;
	stringstream sb;
	stringstream sc;
	stringstream sd;
	stringstream se;
	stringstream sf;
	stringstream sg;
	stringstream sh;
	stringstream si;
	stringstream sj;
	stringstream sk;
	stringstream sl;
	stringstream sm;
	stringstream sn;
	stringstream so;
	stringstream sp;
	stringstream s0;
	
	s0 << number;
	string number_ss = s0.str();
	sa << ground_speed;
	string speed_str = sa.str();
	sb << global_position.latitude;
	string latitude_str = sb.str();
    sc << global_position.longitude;
	string longitude_str = sc.str();
	sd << count_ranges;
	string count_ranges_str= sd.str();
	se << countless_ranges;
	string countless_ranges_str = se.str();
	sf << compass_hdg;
	string compass_hdg_str= sf.str();
	sg << lidar_angle_min;
	string lidar_angle_min_ss  = sg.str();
	sh << lidar_angle_max;
	string lidar_angle_max_ss = sh.str();
	si << lidar_angle_increment;
	string lidar_angle_inc = si.str();
	sj << lidar_time_increment;
	string lidar_time_inc =  sj.str();
	sk << lidar_scan_time;
	string lidar_scan_time = sk.str();
	sl << lidar_range_min;
	string lidar_range_min_ss = sl.str();
	sm << lidar_range_max;
	string lidar_range_max_ss = sm.str();
	sn << range_size;
	string lidar_range_size = sn.str();
	so << count_ranges;
	string count_ranges_ss = so.str();
	sp << countless_ranges;
	string countless_ranges_ss = sp.str(); 
	
	// Write to serial port
	string msg = "#";
	msg += number_ss;
	msg += "/";
	msg += time_lord.getYMD().c_str();
	msg += "/";
	msg += speed_str;
	msg += "/";
	msg += latitude_str;
	msg += "\n";
	cout << msg <<endl<<endl<<endl;
	write(serial_port, msg.c_str() , sizeof(msg));
	
	msg = "%";
	msg += longitude_str;
	msg += "/";
	msg += compass_hdg_str;
	msg += "/"; 
	msg += lidar_angle_min_ss;
	msg += "/";
	msg += lidar_angle_max_ss;
	msg += "\n";
	cout << msg <<endl<<endl<<endl;
	write(serial_port, msg.c_str() , sizeof(msg));
	
	msg = "$";
	msg += lidar_angle_inc;
	msg += "/";
	msg += lidar_time_inc;
	msg += "/";
	msg += lidar_scan_time;
	msg += "/";
	msg += lidar_range_min_ss;
	msg += "\n";
	cout << msg <<endl<<endl<<endl;
	write(serial_port, msg.c_str() , sizeof(msg));
	
	msg = "@";
	msg += lidar_range_max_ss;
	msg += "/";
	msg += lidar_range_size;
	msg += "/";
	msg += count_ranges_ss;
	msg += "/";
	msg += countless_ranges_ss;
	msg += ";";
	cout << msg <<endl<<endl<<endl;
	write(serial_port, msg.c_str() , sizeof(msg));
}

void record_lidar_cb(const sensor_msgs::LaserScan& lidar){
	count_ranges=0;
	countless_ranges=0;
	range_size = sizeof(lidar.ranges);
	for(int j=0; j<range_size;j++){
		if(lidar.ranges[j] == std::numeric_limits<float>::infinity()){count_ranges++;}
		else{countless_ranges++;}
	}
	lidar_range_min = lidar.range_min;
	lidar_range_max = lidar.range_max;
	lidar_angle_increment = lidar.angle_increment;
	lidar_time_increment = lidar.time_increment;
	lidar_scan_time = lidar.scan_time;
	lidar_range_min = lidar.range_min;
	lidar_range_max = lidar.range_max;
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
