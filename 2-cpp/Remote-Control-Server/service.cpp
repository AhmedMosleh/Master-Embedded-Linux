#include <iostream>

#include "executer.hpp"
#include "socket_handler.hpp"


const int PORT = 5000;

int main() {

    CommandExecutor exe;
    SocketHandler soc(PORT);
    soc.serverInit();
    soc.sendString("how are you?");
    std::cout << soc.receiveString() << std::endl;

    while (true) {
        // exe.run();
        // soc.receiveCommand();
    }
    return 0;
}