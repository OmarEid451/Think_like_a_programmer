#include <cctype>
#include <exception>
#include <iostream>
#include <sstream>
#include <stdexcept>
using namespace std;

const int base_number = 10;

// we assume a base 10 number string so no doubled numbers will ever have more than two digits so we can use these ops without worry
int add_digits(int number) {
  int result{};
  result += number % base_number;
  result += number / base_number;
  return result;
}

bool luhn_check(const string& number) {
  istringstream numeric_string{number};
  int check_sum{};
  int i = 0;
  for (char symbol; numeric_string >> symbol;) {
    if (!isdigit(symbol)) throw runtime_error("string_must be numeric");
    int current_number = symbol - '0';
    if (i % 2 != 0) {
      int double_current_number = current_number * 2;
      if (double_current_number > base_number) {
        check_sum += add_digits(double_current_number);
      } else {
        check_sum += double_current_number;
      }
    } else {
      check_sum += current_number;
    }
    ++i;
  }
  if (check_sum % 10 == 0) {
    return true;
  }
  return false;
}

int main() {
  try {
    cout << "Input a string to be validated: ";
    string number;
    cin >> number;
    if (luhn_check(number)) {
      cout << "valid!\n";
    } else {
      cout << "invalid!\n";
    }
  } catch (exception& e) {
    cout << e.what() << '\n';
  } catch (...) {
    cout << "Unkown Error!\n";
  }
}
