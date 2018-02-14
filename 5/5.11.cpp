#include <iostream>
using namespace std;

int fact(int);

int main() {
  int n;

  cout << "Escreve um número" << endl;
  cin >> n;
  cout << "O factorial de " << n << " é " << fact(n) << endl;
  
  return 0;
}

int fact(int n) {
  // Faz overflow com n > 12
  int f;

  if (n <= 1) {
    return 1;
  } else {
    f = n;
  }

  for (int i = n - 1; i > 1; i--) {
    f *= i;
  }

  return f;
}
