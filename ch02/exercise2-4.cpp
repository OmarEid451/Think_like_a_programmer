#include <iostream>

int main() {
  char digit{};

  std::cout << "Enter binary number: ";
  int sum{};
  digit = std::cin.get();
  while (digit == '1' || digit == '0') {
    if (digit == '1') {
      sum *= 2;
      sum += 1;
    }
    else {
      sum *= 2;
    }
    digit = std::cin.get();
  }
  std::cout << sum <<'\n';
}
