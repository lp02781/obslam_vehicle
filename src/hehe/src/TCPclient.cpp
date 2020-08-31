#include <stdio.h> 
#include <sys/socket.h> 
#include <iostream>
#include <arpa/inet.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#define PORT 8080 

using namespace std;
   
int main(int argc, char const *argv[]) 
{ 
	int sock = 0, valread; 
    struct sockaddr_in serv_addr;   
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
   
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
       
    // Convert IPv4 and IPv6 addresses from text to binary form 
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  
    { 
        printf("\nInvalid address/ Address not supported \n"); 
        return -1; 
    } 
   
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    } 
    
    while(1){	
		string payload = "2";
		usleep(100000);
		send(sock , payload.c_str() , strlen(payload.c_str()) , 0 ); 
		cout << payload << endl;
		
		char buffer[5000] = {0};
		valread = read(sock , buffer, 50000);
		printf("%s\n",buffer); 
    }
	return 0; 
} 
