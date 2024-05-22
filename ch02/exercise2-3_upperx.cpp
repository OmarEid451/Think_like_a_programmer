// Test to see if boundaries are correct for the draw line function for exercise
// 2-3 from Think like a programmer

#include <iostream>
using namespace std;

void draw_line (int lower_bound, int upper_bound) {
  for (int i = 0; i < 8; ++i) {
    if (i <= lower_bound || i >= upper_bound) {
      cout << '#';
    } else {
      cout << ' ';
        }
  }
  cout << '\n';
}


int main() {
  int upper{};
  int lower{};
  for (int i = 0; i < 4; ++i ) {
    lower = i;
    upper = 7 - i;
    draw_line(lower, upper);
  }
}
