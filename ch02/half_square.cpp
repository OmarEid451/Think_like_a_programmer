#include <exception>
#include <iostream>
using namespace std;

int main() {
  try {
    const int square_size = 5;
    for (int i = 0; i < square_size; ++i) {
      for (int k = square_size - i; k > 0; k--) {
        cout << '#';
      }
      cout << '\n';
    }
  } catch (exception& e) {
    cout << e.what() <<'\n';
    return 1;

  } catch (...) {
    cout << "Some error!\n";
    return 2;
  }
}
