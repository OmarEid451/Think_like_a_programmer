#include <iostream>
using namespace std;

int main() {
  char digit;

  cout << "Enter number: ";
  // reads digits and applies the appropriate value to them
  while (digit != 10) {
    int sum{};
    digit = cin.get();
    while (digit != 10 && digit != ',') {
      sum *= 10;
      sum += digit - '0';
      digit = cin.get();
    }
    cout << sum << '\n';
  }
}
