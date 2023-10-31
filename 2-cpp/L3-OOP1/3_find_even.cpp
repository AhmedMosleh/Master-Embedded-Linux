#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vtr{1, 2, 3, 4, 5, 6, 7};

  bool hasEven =
      std::any_of(vtr.begin(), vtr.end(), [](int num) { return num % 2 == 0; });

  if (hasEven) {
    std::cout << "The vector contains at least one even number." << std::endl;
  } else {
    std::cout << "The vector does not contain any even numbers." << std::endl;
  }
  return 0;
}