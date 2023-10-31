#include <iostream>

// int main() {
//   char chr;
//   std::cin >> chr;
//   if ('0' <= chr && chr <= '9')
//     std::cout << "true" << std::endl;
//   else
//     std::cout << "false"  << std::endl;
// }



int main() {
    char myChar = '5';

    if (std::isdigit(myChar)) {
        std::cout << "The character is a digit." << std::endl;
    } else {
        std::cout << "The character is not a digit." << std::endl;
    }

    return 0;
}
