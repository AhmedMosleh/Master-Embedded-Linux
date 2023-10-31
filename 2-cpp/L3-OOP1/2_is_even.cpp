#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vtr{6,6,2,4};
  bool hasOdd =
      std::any_of(vtr.begin(), vtr.end(), [](int num) { return num % 2 != 0; });

  if (hasOdd) {
    std::cout << "There are odd elements" << std::endl;
  } else {
    std::cout << "All the array is even" << std::endl;
  }
  return 0;
}
