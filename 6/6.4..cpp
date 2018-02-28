#include <iostream>
using namespace std;

void read(int[], int&);
void print(int[], int);
int sum(int[], int);
double average(int, int);

const int MAXSIZE = 100;

int main() {
  int a[MAXSIZE] = {0}, size;

  read(a, size);
  
  cout << "The array has " << size << " elements: ";
  
  print(a, size);

  return 0;
}

void read(int a[], int& n) {
  cout << "Enter integers. Terminate with 0:" << endl;

  n = 0;

  do {
    cout << "a[" << n << "]: ";
    cin >> a[n];
  } while (a[n++] != 0 && n < MAXSIZE);
  --n;
}

void print(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "The sum of the array's elements is " << sum(a, n) << "." << endl;
  cout << "The average of the array's elements is " << average(sum(a, n), n) << "." << endl;
}

int sum(int a[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum;
}

double average(int size, int n) {
  int average = size / n;

  return average;
}
