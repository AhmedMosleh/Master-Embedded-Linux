#include <iostream>
#include <csignal>

// Define a signal handler function
void signalHandler(int signum) {
    std::cout << "Interrupt signal (" << signum << ") received. Exiting..." << std::endl;
    exit(signum);
}

int main() {
    // Register the signal handler for SIGINT
    signal(SIGINT, signalHandler);

    std::cout << "Press Ctrl+C to trigger the interrupt signal." << std::endl;

    // Your program's main code can go here
    while (true) {
        // Your application logic goes here
    }

    return 0;
}
