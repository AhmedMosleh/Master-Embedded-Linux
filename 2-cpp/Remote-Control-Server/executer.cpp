#include <cstdlib>
#include <iostream>

int main() {
  while (true) {
    std::string command;

    // 1. Take command from user 
    std::cout << "Enter a Linux command (or 'exit' to quit): ";
    std::getline(std::cin, command);

    // 1. check the command 
    if (command == "exit") {
      std::cout << "Exiting the program. Goodbye!" << std::endl;
      break;
    }

    // 3. Using system function to execute the command
        // the system function expects a C-style string as an argument. Using
        // c_str() allows you to pass the contents of a std::string as a
        // null-terminated character array.
    int result = std::system(command.c_str());

    if (result == 0) {
      std::cout << "Command executed successfully." << std::endl;
    } else {
      std::cerr << "Command execution failed." << std::endl;
    }
  }

  return 0;
}
