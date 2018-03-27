#include <iostream>
using namespace std;

template <class T>
T min(T& x, T& y) {
  return (x < y ? x : y);
}

int main() {

  int x = 5, y = 6;

  cout << "Between " << x << " and " << y << ", " << min(x, y) << " is the smallest." << endl;

  int a = 20, b = 10;

  cout << "Between " << a << " and " << b << ", " << min(a, b) << " is the smallest." << endl;

  return 0;
}
