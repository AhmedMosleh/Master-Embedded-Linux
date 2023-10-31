#include <algorithm>
#include <iostream>
#include <type_traits>
#include <vector>

class book_address {
  std::vector<std::string> names{};
  std::vector<std::string> address{};

public:
  void list_users();
  void add_user();
  void delete_user();
  void delete_all();
  void search_user();
};

void book_address::list_users() {
  auto it1 = this->names.begin();
  auto it2 = this->address.begin();
  for (; it1 != names.end(); it1++, it2++) {
    std::cout << *it1 << " => " << *it2 << std::endl;
  }
}

void book_address::add_user() {
  std::string name;
  std::string add;
  std::cin >> name >> add;
  names.push_back(name);
  address.push_back(add);
}

void book_address::delete_user() {
  std::string name;
  std::string add;
  std::cin >> name >> add;
}
void book_address::delete_all() {}
void book_address::search_user() {
  std::string name;
  std::string add;
  std::cin >> name >> add;
}

int select_option();
void App();

int main() { App(); }



void App() {

  book_address mybook;

  std::cout << "Welcom to your favorite address book!   \n";
  while (true) {
    int opt = select_option();
    switch (opt) {
    case 1:
      mybook.list_users();
      break;
    case 2:
      mybook.add_user();
      break;
    case 3:
      mybook.delete_user();
      break;
    case 4:
      mybook.delete_all();
      break;
    case 5:
      mybook.search_user();
      break;
    case 6:
      return;
      break;
    }
  }
  int opt = select_option();
  switch (opt) {
  case 1:
    mybook.list_users();
    break;
  case 2:
    mybook.add_user();
    break;
  case 3:
    mybook.delete_user();
    break;
  case 4:
    mybook.delete_all();
    break;
  case 5:
    mybook.search_user();
    break;
  case 6:
    return;
    break;
  }
}

int select_option() {
  std::cout << "What do you want to do?\n";
  std::cout << "\t| 1. List\t\t| List all users\n";
  std::cout << "\t| 2. Add\t\t| Add an user\n";
  std::cout << "\t| 3. Delete\t\t| Delete an user\n";
  std::cout << "\t| 4. Delete all\t\t| Remove all users\n";
  std::cout << "\t| 5. Search\t\t| Search on a user\n";
  std::cout << "\t| 6. Close\t\t| Close the address book\n";
  int opt;
  ;
  std::cin >> opt;
  return opt;
}
