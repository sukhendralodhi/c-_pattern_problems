#include <iostream>
using namespace std;

void pattern01(int n) {
  int space = 2 * (n - 1);
  for (int i = 1; i <= n; i++) {

    // numbers

    for (int j = 1; j <= i; j++) {
      cout << j;
    }

    // spaces
    for (int k = 1; k <= space; k++) {
      cout << " ";
    }

    // numbers

    for (int j = i; j >= 1; j--) {
      cout << j;
    }

    cout << endl;
    space -= 2;
  }
}

void pattern02(int n) {}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  pattern01(n);
  // pattern02(n);
}