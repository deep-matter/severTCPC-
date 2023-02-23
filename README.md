# severTCPC-
Simple Script provide the mechanism of Respond and Resquest in server-Side using Functional Built Method Socket C++

##### basic Socket C++ Functionality
when comes creating a socket connection between a server and a client using Socket C built methods there's functionality setup the connection :
- creating instance connection using **socket()**
- check connection is verified   using **bind()**
- listening to the port using **listen()**
- recives and respond using **accept() and read()**

in each of this step we need to check if the connection is stil valid or throw and error 

```C++
    char buffer[100];
    auto bytesRead = read(connection , buffer,100);
    cout<<"the message was: "<< buffer <<endl; 
   // send a message 
    string respond = "hey there nice to have you\n";
    send(connection. respond.c_str(),respond.size(),0);

   // close the connectioo
    close(connection);
    close(sockets);
```

