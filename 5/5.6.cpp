#include <iostream>
using namespace std;

int min(int, int, int, int);

int main() {
  int a, b, c, d;
  cout << "Escreve 4 números" << endl;
  cin >> a >> b >> c >> d;
  cout << "O menor número é " << min(a, b, c, d) << endl;

  return 0;
}

int min(int a, int b, int c, int d) {
  int min = a;

  if (min > b) {
    min = b;
  }

  if (min > c) {
    min = c;
  }

  if (min > d) {
    min = d;
  }
}
