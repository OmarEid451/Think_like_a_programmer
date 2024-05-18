#include <iostream>
using namespace std;

int main() {
  const int max_line_length = 8;
  for (int i = 0;  i < 4; ++i) {
    int lower_bound = i;
    int upper_bound = max_line_length - i;
    for (int k = 0; k < max_line_length; ++k) {
      if (k < lower_bound || k >= upper_bound) {
        cout << ' ';
      } else {
        cout << '#';
      }
    }
    cout << '\n';
  }
}
