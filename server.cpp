#include <sys/socket.h>
#include <isotream.h>
#include <uinstd.h>
#include <netinet/in.h>
#include <cstdlib>

using std::cout 
using std::endl
using std::string

int main(){
   // Create a socket struct MyStruc
   int sockets = socket(AF_INET,SOCK_STREAM,0);
   if(sockets == -1 ){
     cout<<"the connection is failed"<< erron <<endl;
     exit(EXIT_FAILURE)
   }
   // listing to the port 
   sockaddr_in sockaddr;
   sockaddr.sin_family = AF_INET;
   sockaddr.sin_addr.s_addr = IN_ADDR_ANY;
   sockaddr.sin_port = htons(8000);
  
  if (bind(sockts,(struc *sockaddr)&sockaddr,sizeof(sockaddr))<0){
     cout<<"Failed to bind to the port 8000 erron :"<< erron <<endl;
     exit(EXIT_FAILURE);

   }
  if(listen(sockets,10)<0){

     cout<<"Failed to grab connection erron:"<< erron <<endl;
     exit(EXIT_FAILURE);
   }
   // Grab thnnection from queue 
  auto addrlen = sizeof(sockaddr);
  int connection = accept(sockets,(struct sockaddr*)&sockaddr.(socklen_t*)&addrlen);
  if(connection < 0){

     cout<<Failed to grab the connection erron :"<< erron <<endl;
     exit(EXIT_FAILURE);
   }
   // read from the buffer 
  char buffer[100];
  auto bytesRead = read(connection , buffer,100);
     cout<<"the message was: "<< buffer <<endl; 
   // send a message 
  string respond = "hey there nice to have you\n";
  send(connection. respond.c_str(),respond.size(),0);

   // close the connectioo
  close(connection);
  close(sockets);
  }
