// command_executor.hpp
#ifndef COMMAND_EXECUTOR_HPP
#define COMMAND_EXECUTOR_HPP

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

class CommandExecutor {
public:
  CommandExecutor();
  ~CommandExecutor();
  void run(std::string cmd);
  bool takeCommand(std::string cmd);
private:
  
  bool executeCommand(const std::string &command);
  std::map<std::string, std::string> req_to_cmd;
};

#endif // COMMAND_EXECUTOR_HPP
