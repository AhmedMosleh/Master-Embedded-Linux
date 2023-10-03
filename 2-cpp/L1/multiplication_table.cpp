#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    // Your C++ code for Multiplication table goes here
    std::vector<int> vtr {1,2,3,4,5,6,7,8,9, 10, 11 ,12};
    for(int n1 : vtr) {
        for(int n2 : vtr) {
            std::cout << n1 << " * " << n2 << " = " << n1*n2 << '\n';
        }
        std::cout << "---------------" <<  std::endl;
    }
    return 0;

}

