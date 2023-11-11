// command_executor.hpp
#ifndef COMMAND_EXECUTOR_HPP
#define COMMAND_EXECUTOR_HPP

#include <cstdlib>
#include <iostream>
#include <string>

class CommandExecutor {
public:
    CommandExecutor();
    ~CommandExecutor();

    void run();

private:
    bool takeCommand();
    bool executeCommand(const std::string& command);

    // Add any additional member variables or functions as needed
};

#endif // COMMAND_EXECUTOR_HPP
