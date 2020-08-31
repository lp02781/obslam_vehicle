#include <unistd.h> 
#include <iostream>
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdio.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <cstdlib>

using namespace std;

#define PORT 8080 

string request = "1";

int main(int argc, char const *argv[]) 
{ 
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
    
	while (std::getline(in, line)) {	
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
		string speed 			= arr[4];
		string latitude 		= arr[5]; 
		string longitude 		= arr[6];
		string compass 			= arr[7];
		string engine_load 		= arr[8];
		string altitude 		= arr[9];
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
		string angle_inc		= arr[27];
		string time_inc			= arr[28];
		string scan_time		= arr[29];
		string range_min		= arr[30];
		string range_max		= arr[31];
		string range_size		= arr[32];
		string not_count		= arr[33];
		string count			= arr[34];
		
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
