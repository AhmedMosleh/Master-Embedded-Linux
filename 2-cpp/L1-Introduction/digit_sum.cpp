#include <iostream>

int main() {
    long long int number; 
    int sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;


    while (number > 0) {
        int digit = number % 10;
        sum += digit; 
        number /= 10; 
    }

    std::cout << "The sum of digits is: " << sum << std::endl;

    return 0;
}
