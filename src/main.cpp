#include <iostream>

bool userQuery() {
  std::cout << "Enter a 'y' for yes, 'n' for no: ";

  while (true) {
    char input{};
    std::cin >> input;

    if (input == 'y' || input == 'Y') {
      std::cout << "You entered yes!\n";
      return true;
    }
    else if (input == 'n' || input == 'N') {
      std::cout << "You entered no...\n";
      return false;
    }
    else {
      std::cout << "Try again!: ";
    }
  }
}

int main() {
  bool query{userQuery()};

  return 0;
}
