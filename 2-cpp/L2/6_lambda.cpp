#include <iostream>

int main() {
    
    int(*get_sqr)(int)  = [] (int n) {return n*n;};
    int num {};
    std::cin >> num;
    std::cout << "sqr = " << get_sqr(num) << std::endl;
    return 0;
}