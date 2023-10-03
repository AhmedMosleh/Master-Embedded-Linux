#include <iostream>

int main() {

    // Your C++ code for Maximum number between three values goes here
    int n1;
    std:: cin >> n1;
    int max = n1;
    for (int i = 0; i < 2; i++) {
        std::cin >> n1;
        if(n1 > max) {max = n1;}
    }
    std:: cout << max << '\n';


    return 0;

}

