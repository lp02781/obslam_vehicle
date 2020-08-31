
#include <stdio.h> 
#include <sys/socket.h> 
#include <iostream>
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

#define PORT 8080 
   
int main(int argc, char const *argv[]) 
{ 
	string payload = "3524,20191203120432,7.194,-6.3620357,106.8224973,134.91,-3.124139071,3.141592741,0.008714509,0.000132517,0.095279396,0.150000006,40,24,9,15,inf,inf,inf,inf,39.778,39.778,39.754,39.746,inf,inf,inf,27.919,27.919,27.714,23.172,23.172,inf,17.178,17.178,17.147,17.326,inf,16.995,16.995";
	cout<<strlen(payload.c_str());
	return 0; 
} 
