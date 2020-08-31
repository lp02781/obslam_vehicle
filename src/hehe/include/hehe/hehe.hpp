#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <sstream>
#include <unistd.h>
#include <netdb.h>
#include <string>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <chrono>
#include <iostream>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "hehe/pixhawk.h"
#include "hehe/lidar.h"
#include "hehe/sensor.h"
#include "sensor_msgs/NavSatFix.h"
#include "mavros_msgs/VFR_HUD.h"
#include "mavros_msgs/GlobalPositionTarget.h"
#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include <unistd.h>
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <arpa/inet.h> 
#include <cstdlib>

using namespace std;

class getTime {

	private:
		time_t t;
		struct tm * now;

	public:

		getTime ();
		void refreshTime();
		string getYear();
		string getMonth();
		string getDay();
		string getHour();
		string getMinute();
		string getSecond();
		string getYMD();
		string getHMS();
};

getTime::getTime(){
    t = time(0);   // get time now
    now = localtime( & t );
}

void getTime::refreshTime(){
    t = time(0);   // get time now
    now = localtime( & t );
}

string getTime::getYear(){
    this->refreshTime();
    int year = now->tm_year + 1900;
    return to_string(year);
}

string getTime::getMonth(){
    this->refreshTime();
    int month = now->tm_mon + 1;
    if(month < 10){
      return "0" + to_string(month);
    }
    else {
      return to_string(month);
    }
}

string getTime::getDay(){
    this->refreshTime();
    int day = now->tm_mday;
    if(day < 10){
		return "0" + to_string(day);
    }
    else {
		return to_string(day);
    }
}
  
string getTime::getHour(){
    this->refreshTime();
    int hour = now->tm_hour;
    if(hour < 10){
		return "0" + to_string(hour);
    }
    else {
		return to_string(hour);
    }
}
  
string getTime::getMinute(){
    this->refreshTime();
    int minute = now->tm_min;
    if(minute < 10){
		return "0" + to_string(minute);
    }
    else {
		return to_string(minute);
    }
}
  
string getTime::getSecond(){
    this->refreshTime();
    int second = now->tm_sec;
    if(second < 10){
		return "0" + to_string(second);
    }
    else {
		return to_string(second);
    }
}

string getTime::getYMD(){
    string complete_ymd = this->getYear() + this->getMonth() + this->getDay() + this->getHour() + this-> getMinute() + this->getSecond();
    return complete_ymd;
}

string getTime::getHMS(){
    string complete_hms = this->getHour() + this-> getMinute() + this->getSecond();
    return complete_hms;
}
