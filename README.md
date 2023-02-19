# severTCPC-
Simple Script provide the mechanism of Respond and Resquest in server-Side using Functional Built Method Socket C++

'''C++

    char buffer[100];
    auto bytesRead = read(connection , buffer,100);
    cout<<"the message was: "<< buffer <<endl; 
   // send a message 
   string respond = "hey there nice to have you\n";
   send(connection. respond.c_str(),respond.size(),0);

   // close the connectioo
    close(connection);
    close(sockets);
'''

