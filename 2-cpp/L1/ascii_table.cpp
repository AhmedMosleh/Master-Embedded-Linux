#include <iostream>
#include <iomanip> // For setw

int main() {
    // Create a table for ASCII code
    std::cout << "ASCII Code Table:" << std::endl;

    std::cout << "+------+--------+" << std::endl;
    std::cout << "| Char | ASCII  |" << std::endl;
    std::cout << "+------+--------+" << std::endl;

    for (int i = 0; i <= 127; i++) {
        char ch = static_cast<char>(i); // Convert integer to character
        std::cout << "|   " << std::setw(3) << ch << "  |  " << std::setw(4) << i << "   |" << std::endl;
    }

    std::cout << "+------+--------+" << std::endl;

    return 0;
}
