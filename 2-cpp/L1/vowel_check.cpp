#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> vowels {'a','e','i','o','u'};
    char letter {};
    
    std::cin >> letter;

    auto it = std::find(vowels.begin(),vowels.end(), letter);

    if (it != vowels.end()) {
        std::cout << letter << " is a vowel." << std::endl;
    } else {
        std::cout << letter << " is not a vowel." << std::endl;
    }
    return 0;
}

