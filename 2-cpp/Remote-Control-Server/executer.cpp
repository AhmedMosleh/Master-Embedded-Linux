// command_executor.cpp
#include "executer.hpp"

CommandExecutor::CommandExecutor() {
    // Constructor initialization if needed
}

CommandExecutor::~CommandExecutor() {
    // Destructor cleanup if needed
}

void CommandExecutor::run() {
    while (true) {
        if (!takeCommand()) {
            std::cerr << "Error while taking command. Exiting." << std::endl;
            break;
        }
    }
}

bool CommandExecutor::takeCommand() {
    std::string command;

    // Take command from user
    std::cout << "Enter a Linux command (or 'exit' to quit): ";
    std::getline(std::cin, command);

    // Check the command
    if (command == "exit") {
        std::cout << "Exiting the program. Goodbye!" << std::endl;
        return false; // Stop taking commands
    }

    // Execute the command
    if (!executeCommand(command)) {
        std::cerr << "Command execution failed." << std::endl;
    }

    return true; // Continue taking commands
}

bool CommandExecutor::executeCommand(const std::string& command) {
    // Using system function to execute the command
    // The system function expects a C-style string as an argument.
    // Using c_str() allows you to pass the contents of a std::string as a
    // null-terminated character array.
    int result = std::system(command.c_str());

    if (result == 0) {
        std::cout << "Command executed successfully." << std::endl;
        return true;
    } else {
        return false;
    }
}
