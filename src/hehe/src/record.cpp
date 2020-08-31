#include "../include/hehe/hehe.hpp"

using namespace std;

FILE *lidar_file;
FILE *sensor_file;
FILE *pixhawk_file;

void lidar_cb(const hehe::lidar& lidar);
void sensor_cb(const hehe::sensor& sensor);
void pixhawk_cb(const hehe::pixhawk& pixhawk);

int main(int argc, char **argv)
{
	ros::init(argc, argv, "record");
	ros::NodeHandle n;
	ros::Subscriber sub_lidar		= n.subscribe("/hehe/lidar", 1, lidar_cb);
	ros::Subscriber sub_sensor		= n.subscribe("/hehe/sensor", 1, sensor_cb);
	ros::Subscriber sub_pixhawk		= n.subscribe("/hehe/pixhawk", 1, pixhawk_cb);
	
	ROS_WARN("NC : record.cpp active");
	
	lidar_file = fopen("../lidar.txt","w");
	sensor_file = fopen("../sensor.txt","w");
	pixhawk_file = fopen("../pixhawk.txt","w");
	
	fprintf(lidar_file,"number angle_min angle_max angle_inc time_inc scan_time range_min range_max range_size count countless lidar_ranges_1 lidar_ranges_2 lidar_ranges_3 lidar_ranges_4 lidar_ranges_5 lidar_ranges_6 lidar_ranges_7 lidar_ranges_8 lidar_ranges_9 lidar_ranges_10 lidar_ranges_11 lidar_ranges_12 lidar_ranges_13 lidar_ranges_14 lidar_ranges_15 lidar_ranges_16 lidar_ranges_17 lidar_ranges_18 lidar_ranges_19 lidar_ranges_20 lidar_ranges_21 lidar_ranges_22 lidar_ranges_23 lidar_ranges_24\n");
	fprintf(sensor_file,"number throttle rpm speed engine_load temperature humidity engine_status battery_status battery_cap air_pressure air_temperature torque load efficiency voltage current discharge hours minutes second health\n");
	fprintf(pixhawk_file,"number time ground_speed latitude longitude compass altitude\n");
	
	sleep(1);
	
	while (ros::ok()) {	
		ros::spinOnce();
	}
}

void lidar_cb(const hehe::lidar& lidar){
	fprintf(lidar_file, "%d %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %d %d %d %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f %0.9f\n", 	lidar.number, lidar.angle_min, lidar.angle_max, lidar.angle_inc, lidar.time_inc, lidar.scan_time, lidar.range_min, lidar.range_max, lidar.range_size, lidar.count, lidar.countless, lidar.lidar_ranges_1, lidar.lidar_ranges_2, lidar.lidar_ranges_3, lidar.lidar_ranges_4, lidar.lidar_ranges_5, lidar.lidar_ranges_6, lidar.lidar_ranges_7, lidar.lidar_ranges_8, lidar.lidar_ranges_9, lidar.lidar_ranges_10, lidar.lidar_ranges_11, lidar.lidar_ranges_12, lidar.lidar_ranges_13, lidar.lidar_ranges_14, lidar.lidar_ranges_15, lidar.lidar_ranges_16, lidar.lidar_ranges_17, lidar.lidar_ranges_18, lidar.lidar_ranges_19, lidar.lidar_ranges_20, lidar.lidar_ranges_21, lidar.lidar_ranges_22, lidar.lidar_ranges_23, lidar.lidar_ranges_24);
}

void sensor_cb(const hehe::sensor& sensor){
	fprintf(sensor_file, "%d %d %d %d %0.2f %d %d %s %s %d %d %d %d %d %d %d %d %d %d %d %d %s\n", sensor.number, sensor.throttle, sensor.rpm, sensor.speed, sensor.engine_load, sensor.temperature, sensor.humidity, sensor.engine_status.c_str(), sensor.battery_status.c_str(), sensor.battery_cap, sensor.air_pressure, sensor.air_temperature, sensor.torque, sensor.load, sensor.efficiency, sensor.voltage, sensor.current, sensor.discharge, sensor.hours, sensor.minutes, sensor.second, sensor.health.c_str());
}

void pixhawk_cb(const hehe::pixhawk& pixhawk){
	fprintf(pixhawk_file, "%d %s %d %0.9f %0.9f %0.2f %0.2f\n", pixhawk.number, pixhawk.time.c_str(), pixhawk.ground_speed, pixhawk.latitude, pixhawk.longitude, pixhawk.compass, pixhawk.altitude);
}
