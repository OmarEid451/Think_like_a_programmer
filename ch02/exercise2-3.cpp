#include <iostream>
using namespace std;
// Exercise 2-3 from think like a programmer
// code is the same as in 2-2 we just change use a union inequality instead of
// an intersection we need to write code that will not only shift the range but
// also the starting point for each range maybe pass the starting line in as
// a variable?


const int max_line_length = 8;
constexpr int halfway{max_line_length / 2};

void draw_line(int upper_bound, int lower_bound) {
  for (int k = 0; k < max_line_length; ++k) {
    if (k <= lower_bound || k >= upper_bound) {
      cout << '#';
    } else {
      cout << ' ';
    }
  }
  cout << '\n';
}

// TODO create inverted line function that draws the middle lines.

int main() {
  int lower_bound, upper_bound;
  for (int i = 0; i < max_line_length; ++i) {
    if (i <= halfway) {
      lower_bound = i;
      upper_bound = (max_line_length -1) - i;
    } else {
      lower_bound = (halfway - 1) - (i % halfway);
      upper_bound = halfway + (i % halfway);
    }
    draw_line(upper_bound, lower_bound);
  }
}
