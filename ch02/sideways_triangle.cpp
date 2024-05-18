#include <iostream>
using namespace std;

void print_triangle (int longest_row) {
  for (int i = 0; i < longest_row; ++i) {
    for (int k = 0; k <= i; ++k) {
      cout << '#';
    }
    cout << '\n';
  }

  int bottom_min = longest_row - 1;

  for (int i = 0; i < bottom_min; ++i) {
    for (int k = bottom_min - i; k > 0; k--) {
      cout << "#";
    }
    cout << '\n';
  }
}

int main() {
  print_triangle(4);
}
