// #include <cstring>
// #include <iostream>
// #include <netinet/in.h>
// #include <sys/socket.h>
// #include <unistd.h>

// // sets the port number on which the server will listen for incoming
// // connections.
// const int PORT = 5000;

// int main() {
//   // 1. Create socket:
//   // we create a new socket using the socket system call.
//   // The AF_INET argument specifies the address family (IPv4),
//   // SOCK_STREAM specifies the socket type (TCP).
//   int serverSocket, newSocket;
//   if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
//     perror("Socket creation failed");
//     return -1;
//   }

//   // 2. Set Up Server Address Structure:
//   // initializes the server address structure.
//   struct sockaddr_in serverAddr, clientAddr;
//   socklen_t addrSize = sizeof(struct sockaddr_in);
//   // It sets the address family to IPv4,
//   serverAddr.sin_family = AF_INET;
//   // binds the server to any available network interface (INADDR_ANY),
//   serverAddr.sin_addr.s_addr = INADDR_ANY;
//   // specifies the port number in network byte order using htons.
//   serverAddr.sin_port = htons(PORT);

//   // 3. Bind the Socket:
//   // The bind system call associates the socket with the specified address
//   and
//   // port.
//   if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr))
//   <
//       0) {
//     perror("Bind failed");
//     return -1;
//   }

//   // 4. Listen for Incoming Connections
//   //   The listen function allows the server to accept incoming connections.
//   The
//   //   second argument (5 in this case) is the maximum number of pending
//   //   connections that can be in the queue.
//   if (listen(serverSocket, 5) < 0) {
//     perror("Listen failed");
//     return -1;
//   }

//   // Accept Incoming Connection
//   //   The accept system call blocks until a client connects to the server.
//   It
//   //   returns a new socket descriptor (newSocket) for communication with the
//   //   connected client.
//   if ((newSocket = accept(serverSocket, (struct sockaddr *)&clientAddr,
//     &addrSize)) < 0) {
//     perror("Accept failed");
//     return -1;
//   }

//   // 5. Communication with Client:
//   // This code receives a string from the client using the recv function. If
//   // data is received successfully, it prints the received string and sends a
//   // response back to the client using the send function.
//   char buffer[1024] = {0};

//   // Receive a string from the client
//   int bytesRead = recv(newSocket, buffer, sizeof(buffer), 0);

//   if (bytesRead > 0) {
//     std::cout << "Received from client: " << buffer << std::endl;

//     // Send a string back to the client
//     const char *messageToSend = "Hello from Server!";
//     send(newSocket, messageToSend, strlen(messageToSend), 0);
//   } else {
//     std::cerr << "Failed to receive from client." << std::endl;
//   }

//   // 6. Close Sockets
//   close(serverSocket);
//   close(newSocket);

//   return 0;
// }

// socket_handler.cpp
#include "socket_handler.hpp"

SocketHandler::SocketHandler(int port) {
  // 1. Create socket:
  // we create a new socket using the socket system call.
  // The AF_INET argument specifies the address family (IPv4),
  // SOCK_STREAM specifies the socket type (TCP).
  serverSocket = 0;
  newSocket = 0;
  addrSize = sizeof(struct sockaddr_in);

  if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
    perror("Socket creation failed");
  }
  // 2. Set Up Server Address Structure:
  // initializes the server address structure.
  // It sets the address family to IPv4,
  // binds the server to any available network interface (INADDR_ANY),
  // specifies the port number in network byte order using htons.
  serverAddr.sin_family = AF_INET;
  serverAddr.sin_addr.s_addr = INADDR_ANY;
  serverAddr.sin_port = htons(port);
}

SocketHandler::~SocketHandler() {
  close(serverSocket);
  close(newSocket);
}

void SocketHandler::serverInit() {
    startServer();
    acceptConnection();
}


bool SocketHandler::startServer() {
  // 3. Bind the Socket:
  // The bind system call associates the socket with the specified address and
  // port.
  if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) <
      0) {
    perror("Bind failed");
    return false;
  }

  // 4. Listen for Incoming Connections
  //  The listen function allows the server to accept incoming connections.
  //  The second argument (5 in this case) is the maximum number of pending
  //  connections that can be in the queue.
  if (listen(serverSocket, 5) < 0) {
    perror("Listen failed");
    return false;
  }

  return true;
}

bool SocketHandler::acceptConnection() {
  // 5. Accept Incoming Connection
  // The accept system call blocks until a client connects to the server.
  // It returns a new socket descriptor (newSocket) for communication with the
  // connected client.
  if ((newSocket = accept(serverSocket, (struct sockaddr *)&clientAddr,
                          &addrSize)) < 0) {
    perror("Accept failed");
    return false;
  }

  std::cout << "Connection established with client" << std::endl;
  return true;
}

std::string SocketHandler::receiveString() {
    char buffer[1024] = {0};
    int bytesRead = recv(newSocket, buffer, sizeof(buffer), 0);

    if (bytesRead > 0) {
        std::cout << "Received string from client: " << buffer << std::endl;
        return std::string(buffer);
    } else {
        std::cerr << "Failed to receive string from client." << std::endl;
        return "";
    }
}


bool SocketHandler::sendString(const std::string& message) {
    int bytesSent = send(newSocket, message.c_str(), message.length(), 0);

    if (bytesSent != -1) {
        std::cout << "Sent string to client: " << message << std::endl;
        return true;
    } else {
        std::cerr << "Failed to send string to client." << std::endl;
        return false;
    }
}
