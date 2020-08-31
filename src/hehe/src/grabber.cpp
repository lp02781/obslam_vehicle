#include "../include/hehe/hehe.hpp"

using namespace std;

getTime time_lord;
int number=0;
int ground_speed;
float latitude, longitude, compass, altitude;

float angle_min, angle_max, angle_inc, time_inc, scan_time, range_min, range_max, lidar_ranges[30];
int range_size, count_ranges, countless_ranges;

int throttle, rpm, speed, engine_load, temperature, humidity, air_pressure, air_temperature, torque, load, efficiency;
int battery_cap, voltage, current, discharge, hours, minutes, second;
string engine_status, battery_status, health;

void globalPositionCB(const sensor_msgs::NavSatFix& msg);
void record_lidar_cb(const sensor_msgs::LaserScan& lidar);
void vfr_hud_cb(const mavros_msgs::VFR_HUD& msg);
void compass_rc_cb(const std_msgs::Float64& msg);
void sensor_data();
void grab_data();

sensor_msgs::NavSatFix	global_position;

ros::Publisher pub_lidar_data;
ros::Publisher pub_pixhawk_data;
ros::Publisher pub_sensor_data;

hehe::lidar lidar_data;
hehe::pixhawk pixhawk_data;
hehe::sensor engine_data;

int main(int argc, char **argv)
{
	ros::init(argc, argv, "grabber");
	ros::NodeHandle n;

	pub_lidar_data 				= n.advertise<hehe::lidar>("/hehe/lidar", 8);
	pub_pixhawk_data 			= n.advertise<hehe::pixhawk>("/hehe/pixhawk", 8);
	pub_sensor_data 			= n.advertise<hehe::sensor>("/hehe/sensor", 8);
		
	ros::Subscriber sub_record_lidar	= n.subscribe("/scan", 8, record_lidar_cb);
	ros::Subscriber sub_global_position = n.subscribe("/mavros/global_position/global", 1, globalPositionCB);
	ros::Subscriber sub_vfr_hud 		= n.subscribe("/mavros/vfr_hud", 1, vfr_hud_cb);
	ros::Subscriber sub_compass_cb		= n.subscribe("/mavros/global_position/compass_hdg", 8, compass_rc_cb);

	ROS_WARN("NC : Grabber.cpp active");
	
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
		sensor_data();
		grab_data();
		number++;
	}
}
void grab_data(){
	pixhawk_data.number 		= number;
	pixhawk_data.time 			= time_lord.getYMD().c_str();
	pixhawk_data.ground_speed 	= ground_speed;
	pixhawk_data.latitude 		= global_position.latitude;
	pixhawk_data.longitude 		= global_position.longitude;
	pixhawk_data.compass 		= compass;
	pixhawk_data.altitude 		= global_position.altitude;
	pub_pixhawk_data.publish(pixhawk_data);

	lidar_data.number 		= number;
	lidar_data.angle_min	= angle_min;
	lidar_data.angle_max	= angle_max;
	lidar_data.angle_inc	= angle_inc;
	lidar_data.time_inc		= time_inc;
	lidar_data.scan_time	= scan_time;
	lidar_data.range_min	= range_min;
	lidar_data.range_max	= range_max;
	lidar_data.range_size	= range_size;
	lidar_data.count		= count_ranges;
	lidar_data.countless	= countless_ranges;
	lidar_data.lidar_ranges_1=lidar_ranges[0];
	lidar_data.lidar_ranges_2=lidar_ranges[1];
	lidar_data.lidar_ranges_3=lidar_ranges[2];
	lidar_data.lidar_ranges_4=lidar_ranges[3];
	lidar_data.lidar_ranges_5=lidar_ranges[4];
	lidar_data.lidar_ranges_6=lidar_ranges[5];
	lidar_data.lidar_ranges_7=lidar_ranges[6];
	lidar_data.lidar_ranges_8=lidar_ranges[7];
	lidar_data.lidar_ranges_9=lidar_ranges[8];
	lidar_data.lidar_ranges_10=lidar_ranges[9];
	lidar_data.lidar_ranges_11=lidar_ranges[10];
	lidar_data.lidar_ranges_12=lidar_ranges[11];
	lidar_data.lidar_ranges_13=lidar_ranges[12];
	lidar_data.lidar_ranges_14=lidar_ranges[13];
	lidar_data.lidar_ranges_15=lidar_ranges[14];
	lidar_data.lidar_ranges_16=lidar_ranges[15];
	lidar_data.lidar_ranges_17=lidar_ranges[16];
	lidar_data.lidar_ranges_18=lidar_ranges[17];
	lidar_data.lidar_ranges_19=lidar_ranges[18];
	lidar_data.lidar_ranges_20=lidar_ranges[19];
	lidar_data.lidar_ranges_21=lidar_ranges[20];
	lidar_data.lidar_ranges_22=lidar_ranges[21];
	lidar_data.lidar_ranges_23=lidar_ranges[22];
	lidar_data.lidar_ranges_24=lidar_ranges[23];
	pub_lidar_data.publish(lidar_data);
	
	engine_data.number 		= number;
	engine_data.throttle 		= throttle;
	engine_data.rpm				= rpm;
	engine_data.speed			= speed;
	engine_data.engine_load		= engine_load;
	engine_data.temperature		= temperature;
	engine_data.humidity		= humidity;
	engine_data.engine_status	= engine_status;
	engine_data.battery_status	= battery_status;
	engine_data.battery_cap		= battery_cap;
	engine_data.air_pressure	= air_pressure;
	engine_data.air_temperature	= air_temperature;
	engine_data.torque			= torque;
	engine_data.load			= load;
	engine_data.efficiency		= efficiency;
	engine_data.voltage			= voltage;
	engine_data.current			= current;
	engine_data.discharge		= discharge;
	engine_data.hours			= hours;
	engine_data.minutes			= minutes;
	engine_data.second			= second;
	engine_data.health			= health;
	pub_sensor_data.publish(engine_data);

}

void sensor_data(){
	throttle		= 42;
	rpm 			= 42;
	speed			= 42;
	engine_load		= 42;
	temperature		= 42;
	humidity		= 42;
	engine_status	= "ON";
	battery_status	= "ON";
	battery_cap		= 42;
	air_pressure	= 42;
	air_temperature	= 42;
	torque			= 42;
	load			= 42;
	efficiency		= 42;
	voltage			= 42;
	current			= 42;
	discharge		= 42;
	hours			= 42;
	minutes			= 42;
	second			= 42;
	health			= "GOOD";
}

void record_lidar_cb(const sensor_msgs::LaserScan& lidar){
	count_ranges		= 0;
	countless_ranges    = 0;
	range_size 	= sizeof(lidar.ranges);
	angle_min	= lidar.angle_min;
	angle_max	= lidar.angle_max;
	angle_inc	= lidar.angle_increment;
	time_inc 	= lidar.time_increment;
	scan_time	= lidar.scan_time;
	range_min	= lidar.range_min;
	range_max	= lidar.range_max;
	for(int j=0; j<range_size;j++){
		if(lidar.ranges[j] == std::numeric_limits<float>::infinity()){countless_ranges++;}
		else{count_ranges++;}
	}
	for(int i=0; i<range_size;i++){
		lidar_ranges[i]=lidar.ranges[i];
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
	compass = msg.data;
}

