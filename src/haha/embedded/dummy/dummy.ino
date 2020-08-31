int range_size, count_ranges, countless_ranges, number;
int lidar_angle_min, lidar_angle_max, lidar_angle_increament, lidar_time_increament, lidar_scan_time, lidar_range_min, lidar_range_max;
float latitude_str, longitude_str;
float speed_str;
double compass_hdg_str;
int time_lord;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  String msg = "#";
  msg += number;
  msg += "/";
  msg += time_lord;
  msg += "/";
  msg += speed_str;
  msg += "/";
  msg += latitude_str;
  msg += "\n";
  Serial.print(msg);

  msg = "%";
  msg += longitude_str;
  msg += "/";
  msg += compass_hdg_str;
  msg += "/"; 
  msg += lidar_angle_min;
  msg += "/";
  msg += lidar_angle_max;
  msg += "\n";
  Serial.print(msg);
  
  msg = "$";
  msg += lidar_angle_increament;
  msg += "/";
  msg += lidar_time_increament;
  msg += "/";
  msg += lidar_scan_time;
  msg += "/";
  msg += lidar_range_min;
  msg += "\n";
  Serial.print(msg);
  
  msg = "@";
  msg += lidar_range_max;
  msg += "/";
  msg += range_size;
  msg += "/";
  msg += count_ranges;
  msg += "/";
  msg += countless_ranges;
  msg += "\n";
  Serial.print(msg);
  
  number++;
  time_lord+=4;
  speed_str+=2;
  latitude_str+=3;
  longitude_str+=4;
  compass_hdg_str+=5;
  lidar_angle_min++;
  lidar_angle_max+=2;
  lidar_angle_increament+=3;
  lidar_time_increament+=4;
  lidar_scan_time+=5;
  lidar_range_min++;
  lidar_range_max+=1;
  range_size+=2;
  count_ranges+=3;
  countless_ranges+=4;
  delay(1000);
}
