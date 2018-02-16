#include <iostream>
using namespace std;

int digit(int n, int k);

int main() {
  int n, k;
  cout << "Escreve um número:" << endl;
  cin >> n;
  cout << "Qual o dígito?" << endl;
  cin >> k;

  cout << "O " << k << "º dígito de " << n << " é " << digit(n, k) << endl;

  return 0;
}

int digit(int n, int k) {
  int m = n;
  int r = m % 10;

  for (int i = 0; i < k; i++) {
    m /= 10;
    r = m % 10;
  }

  return r;
}
