#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;
  double a[SIZE];

  cout << "Enter " << SIZE << " numbers" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << "\ta[" << i << "]: ";
    cin >> a[i];
  }

  cout << "In reverse order, they are:" << endl;
  for (int i = SIZE - 1; i >= 0; i--) {
    cout << "\ta[" << i << "] = " << a[i] << endl;
  }

  return 0;
}
