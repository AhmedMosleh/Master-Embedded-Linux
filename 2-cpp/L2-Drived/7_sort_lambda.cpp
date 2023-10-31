#include <algorithm>
#include <iostream>
#include <type_traits>
#include <vector>

int main() {
  std::vector<int> vtr{5, 6, -100, 20, 0, 11, 13, 800};

  sort(vtr.begin(), vtr.end(), [](int n1, int n2) {
    if (n1 > n2)
      return true;
    else
      return false;
  });

  for (int val : vtr) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  sort(vtr.begin(), vtr.end(), [](int n1, int n2) {
    if (n1 < n2)
      return true;
    else
      return false;
  });

  for (int val : vtr) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}