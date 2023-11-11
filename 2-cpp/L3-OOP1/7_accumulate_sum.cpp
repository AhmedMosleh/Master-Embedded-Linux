#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string str{"LR"};
  int x{}, y{};

  for (char &chr : str) {
    switch (chr) {
    case 'U':
      ++y;
      break;
    case 'D':
      --y;
      break;
    case 'R':
      ++x;
      break;
    case 'L':
      --x;
      break;
    }
  }
  if (x == 0 && y == 0)
    {
        std::cout << "true" << std::endl;
    }
}