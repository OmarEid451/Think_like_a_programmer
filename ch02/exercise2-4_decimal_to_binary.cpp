// This is like all the other number processing exercises except we are going to
// create the string of binary from a given decimal point

#include <iostream>
#include <string>

std::string dec_to_binary (int digit) {
  std::string res;
  int num_digits = digit / 2;
  if (num_digits == 0) {
    res += '0';
    return res;
  }
  for (int i = 0; i < num_digits; ++i) {
    if (i == 0) {
      res += '1';
    } else if (i != num_digits - 1) {
      res += '0';
        } else if (i == num_digits - 1 && num_digits % 2 == 0) {
      res += '0';
    } else {
      res += '1';
    }
  }
  return res;
}

int main() {
  char character_digit;
  std::cout << "Enter a positive number less than 10: ";
  character_digit = std::cin.get();
  int number = character_digit - '0';
  std::string binary_string = dec_to_binary(number);
  std::cout << binary_string << '\n';
}
