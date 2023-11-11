#include <iostream>

#include "executer.hpp"
#include "socket_handler.hpp"


const int PORT = 5000;

int main() {

    CommandExecutor exe;
    SocketHandler soc(PORT);
    soc.serverInit();
    soc.sendString("how are you?");
    std::string str = soc.receiveString();
    std::cout << str << std::endl;
    exe.takeCommand(str);


    while (true) {
        // exe.run("");
        // soc.receiveCommand();
    }
    return 0;
}