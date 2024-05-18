#include <iostream>
using namespace std;

int main() {
  char letter{};
  char num{};
  int alphabet_num{};
  cout << "Enter a number between 1 and 26: ";
  cin >> num;
  alphabet_num = num - '0';
  letter = (alphabet_num + 'A') - 1;
  cout << letter << '\n';
}
