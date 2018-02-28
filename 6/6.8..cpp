#include <iostream>
using namespace std;

float min(float[], int);

int main() {

  const int SIZE = 4;
  float a[SIZE] = {74.5, 26.2, 35.1, 48.1};

  cout << "The smallest number in a[] is " << min(a, SIZE) << endl;


  return 0;
}

float min(float a[], int n) {

  float min = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }

  return min;
}
