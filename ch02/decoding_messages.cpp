#include <iostream>
using namespace std;

int main() {
  enum class Mode{
    Uppercase, Lowercase, Punctuation
  };

  char punct_table[] = {'0', '!', '?', ',', '.', ' ', ';', '"', '\''};

  char output_character;
  Mode current_mode = Mode::Uppercase;
  char digit;
  while (digit != 10) {
    int sum{};
    digit = cin.get();
    while (digit != 10 && digit != ',') {
      sum *= 10;
      sum += digit - '0';
      digit = cin.get();
    }
    switch (current_mode) {
    case Mode::Uppercase:
      {
        sum = sum % 27;
        output_character = (sum + 'A') - 1;
        if (sum == 0) {
          current_mode = Mode::Lowercase;
          continue;
        }
        break;
      }
    case Mode::Lowercase:
      {
        sum = sum % 27;
        output_character = (sum + 'a') - 1;
        if (sum == 0) {
          current_mode = Mode::Punctuation;
          continue;
        }
        break;

      }
    case Mode::Punctuation:
      {
        sum = sum % 9;
        output_character = punct_table[sum];
        if (sum == 0) {
          current_mode = Mode::Uppercase;
          continue;
        }
        break;

      }

        }
    cout << output_character;
  }
  cout << '\n';
}
