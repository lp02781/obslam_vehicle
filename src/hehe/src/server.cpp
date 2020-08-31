#include "../include/hehe/hehe.hpp"

using namespace std;

#define PORT 8080 

string request = "1";

void lidar_cb(const hehe::lidar& lidar);
void pixhawk_cb(const hehe::pixhawk& pixhawk);

int speed_data;
float latitude_data; 	 
float longitude_data; 	
float compass_data; 		
float altitude_data; 	
float angle_inc_data;	
float time_inc_data;		
float scan_time_data;	
float range_min_data;	
float range_max_data;	
int range_size_data;		
int not_count_data;		
int count_data;			
float lidar_data[24];
		
int main(int argc, char **argv)
{
	ros::init(argc, argv, "record");
	ros::NodeHandle n;
		
	ros::Subscriber sub_lidar		= n.subscribe("/hehe/lidar", 1, lidar_cb);
	ros::Subscriber sub_pixhawk		= n.subscribe("/hehe/pixhawk", 1, pixhawk_cb);
	
	ROS_WARN("NC : record.cpp active");
	
	sleep(1);
	
	int server_fd, new_socket, valread; 
    struct sockaddr_in address; 
    int opt = 1; 
    int addrlen = sizeof(address); 
    char buffer[1024] = {0}; 
       
    // Creating socket file descriptor 
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
    { 
        perror("socket failed"); 
        exit(EXIT_FAILURE); 
    } 
       
    // Forcefully attaching socket to the port 8080 
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
                                                  &opt, sizeof(opt))) 
    { 
        perror("setsockopt"); 
        exit(EXIT_FAILURE); 
    } 
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = INADDR_ANY; 
    address.sin_port = htons( PORT ); 
       
    // Forcefully attaching socket to the port 8080 
    if (bind(server_fd, (struct sockaddr *)&address,  
                                 sizeof(address))<0) 
    { 
        perror("bind failed"); 
        exit(EXIT_FAILURE); 
    } 
    if (listen(server_fd, 3) < 0) 
    { 
        perror("listen"); 
        exit(EXIT_FAILURE); 
    } 
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
                       (socklen_t*)&addrlen))<0) 
    { 
        perror("accept"); 
        exit(EXIT_FAILURE); 
    } 
    
    ifstream in("../obslam_vehicle/documents/mobil/complete.csv");
    string payload;
    string line;
	
	while (std::getline(in, line)&&ros::ok()) {	
		ros::spinOnce();
		
		string arr[60];
		int i = 0;
		stringstream ssin(line);
		while (ssin.good() && i < 60){
			ssin >> arr[i];
			++i;
		}
		
		string no 				= arr[0]; 
		string time				= arr[1];
		string throttle			= arr[2];
		string rpm				= arr[3];
		string speed 			= to_string(speed_data);
		string latitude 		= to_string(latitude_data); 
		string longitude 		= to_string(longitude_data);
		string compass 			= to_string(compass_data);
		string engine_load 		= arr[8];
		string altitude 		= to_string(altitude_data);
		string temperature 		= arr[10];
		string humidity 		= arr[11];
		string engine_status 	= arr[12];
		string battery_status 	= arr[13];
		string battery_capacity = arr[14];
		string air_press 		= arr[15];
		string air_temp			= arr[16];
		string torque			= arr[17];
		string load				= arr[18];
		string efficiency		= arr[19];
		string voltage 			= arr[20];
		string current 			= arr[21];
		string discharge 		= arr[22];
		string hours			= arr[23];
		string minutes 			= arr[24];
		string second 			= arr[25];
		string health 			= arr[26];
		string angle_inc		= to_string(angle_inc_data);
		string time_inc			= to_string(time_inc_data);
		string scan_time		= to_string(scan_time_data);
		string range_min		= to_string(range_min_data);
		string range_max		= to_string(range_max_data);
		string range_size		= to_string(range_size_data);
		string not_count		= to_string(not_count_data);
		string count			= to_string(count_data);
		
		string lidar[24];
		int k=0;		
		for(k=0;k<24;k++){
			lidar[k] = arr[k+35];
		}
		
		
		if(request=="1"){
			payload="1/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+speed+"/"+throttle+"/"+rpm+"/"+engine_load+"/"+temperature+"/"+humidity;
		}
		
		else if(request=="2"){
			payload="2/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+angle_inc+"/"+time_inc+"/"+scan_time+"/"+range_min+"/"+range_max+"/"+range_size+"/"+not_count+"/"+count+"/";
			int j=0;
			for(j=0;j<24;j++){
				payload += lidar[j];
				payload += "/";
			}
		}
		
		else if(request=="3"){
			payload="3/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+latitude+"/"+longitude+"/"+compass+"/"+altitude;
		}
		
		else if(request=="4"){
			payload="4/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+air_press+"/"+air_temp+"/"+engine_load+"/"+throttle;
		}
		
		else if(request=="5"){
			payload="5/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+current+"/"+efficiency+"/"+load+"/"+torque+"/"+voltage;
		}
		
		else if(request=="6"){
			payload="6/"+battery_status+"/"+engine_status+"/"+battery_capacity+"/"+discharge+"/"+hours+"/"+minutes+"/"+second+"/"+health+"/"+voltage;
		}
		
		else if(request=="7"){
			payload="7/"+battery_status+"/"+engine_status+"/"+battery_capacity;
		}
		
		else{
			payload = "there's no request";	
		}
		
		
		cout<<payload<<endl;
		
		send(new_socket , payload.c_str() , strlen(payload.c_str()) , 0 );
		payload="";
		usleep(100000);
		
		char buffer[5000] = {0};
		valread = read(new_socket , buffer, 50000);
		request = buffer;
		cout << buffer << endl;
	}
	return 0;
}

void lidar_cb(const hehe::lidar& lidar){
	angle_inc_data=lidar.angle_inc;	
	time_inc_data=lidar.time_inc;		
	scan_time_data=lidar.scan_time;	
	range_min_data=lidar.range_min;	
	range_max_data=lidar.range_max;	
	range_size_data=lidar.range_size;		
	not_count_data=lidar.countless;		
	count_data=lidar.count;			
	lidar_data[0]=lidar.lidar_ranges_1;
	lidar_data[1]=lidar.lidar_ranges_2;
	lidar_data[2]=lidar.lidar_ranges_3;
	lidar_data[3]=lidar.lidar_ranges_4;
	lidar_data[4]=lidar.lidar_ranges_5;
	lidar_data[5]=lidar.lidar_ranges_6;
	lidar_data[6]=lidar.lidar_ranges_7;
	lidar_data[7]=lidar.lidar_ranges_8;
	lidar_data[8]=lidar.lidar_ranges_9;
	lidar_data[9]=lidar.lidar_ranges_10;
	lidar_data[10]=lidar.lidar_ranges_11;
	lidar_data[11]=lidar.lidar_ranges_12;
	lidar_data[12]=lidar.lidar_ranges_13;
	lidar_data[13]=lidar.lidar_ranges_14;
	lidar_data[14]=lidar.lidar_ranges_15;
	lidar_data[15]=lidar.lidar_ranges_16;
	lidar_data[16]=lidar.lidar_ranges_17;
	lidar_data[17]=lidar.lidar_ranges_18;
	lidar_data[18]=lidar.lidar_ranges_19;
	lidar_data[19]=lidar.lidar_ranges_20;
	lidar_data[20]=lidar.lidar_ranges_21;
	lidar_data[21]=lidar.lidar_ranges_22;
	lidar_data[22]=lidar.lidar_ranges_23;
	lidar_data[23]=lidar.lidar_ranges_24;
}


void pixhawk_cb(const hehe::pixhawk& pixhawk){
	speed_data=pixhawk.ground_speed;
	latitude_data=pixhawk.latitude; 	 
	longitude_data=pixhawk.longitude; 	
	compass_data=pixhawk.compass; 		
	altitude_data=pixhawk.altitude; 	
}
