// socket_handler.hpp
#ifndef SOCKET_HANDLER_HPP
#define SOCKET_HANDLER_HPP

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

class SocketHandler {
public:
    SocketHandler(int port);
    ~SocketHandler();

    void serverInit();
    bool startServer();
    bool acceptConnection();
    std::string receiveCommand();

private:
    int serverSocket;
    int newSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t addrSize;
};

#endif // SOCKET_HANDLER_HPP
