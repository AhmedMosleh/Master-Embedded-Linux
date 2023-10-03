#include <iostream>
#include <bitset>

int main() {

    // Your C++ code for Summation of the digits of an integer entered by the user goes here
    int dec ;;
    std::cout << "Enter a decimal number: ";
    std::cin >> dec;
    std::cout << std::endl;

    std::bitset<sizeof(int)> bin(dec);
    std::cout << "binary number: " << bin << '\n';


    std::cout << "Enter a binary number: ";
    std::cin >> bin;
    std::cout << std::endl;

    unsigned long intValue = bin.to_ulong();
    std::cout << "Integer value: " << intValue << std::endl;

    return 0;

}

