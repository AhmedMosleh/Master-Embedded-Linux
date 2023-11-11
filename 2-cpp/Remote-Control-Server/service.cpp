#include <iostream>

#include "executer.hpp"
#include "socket_handler.hpp"


const int PORT = 5000;

int main() {

    CommandExecutor exe;
    SocketHandler soc(PORT);
    soc.serverInit();

    while (true) {
        // exe.run();
        // soc.receiveCommand();
    }
    return 0;
}