#include <iostream>
using namespace std;

void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    // star
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // star
    for (int k = 0; k < 2 * n - (2 * i + 1); k++) {
      cout << "*";
    }
    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  pattern1(n);
  pattern2(n);
}