#include <iostream>
using namespace std;
// Exercise 2-2 from think like a programmer
// In essenece we are drawing a vertically oriented rhombus with height of 8.
// we split this problem up by doing a an interaton the length of the loop  and
// then having the draw line function graph a compound inequality using a loop.
// we draw a hash mark if we are in the range and a space if we are not.
// The ranges are determined by algebraic expressions that change based on the
// value of the length loop variable.


const int max_line_length = 8;
constexpr int halfway{max_line_length / 2};

void draw_line(int upper_bound, int lower_bound) {
  for (int k = 0; k < max_line_length; ++k) {
    if (k >= lower_bound && k < upper_bound) {
      cout << '#';
    } else {
      cout << ' ';
    }
  }
  cout << '\n';
}

int main() {
  int lower_bound, upper_bound;
  for (int i = 0; i < max_line_length; ++i) {
    if (i <= halfway) {
      lower_bound = (halfway)-i;
      upper_bound = halfway + i;
    } else {
      lower_bound = i % halfway;
      upper_bound = max_line_length - (i % halfway);
    }
    if (i == halfway) {
      draw_line(upper_bound, lower_bound);
      draw_line(upper_bound, lower_bound);
    } else {
      draw_line(upper_bound, lower_bound);
        }
  }
}
