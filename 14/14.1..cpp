#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int frequency(vector<int> v, int x) {
  int i = 0;

  for (vector<int>::iterator it = v.begin(); ; it++) {
    it = find(it, v.end(), x);
    if (it == v.end()) {
      return i;
    }
    i++;
  }

  return i;
}

int main() {

  vector<int> v(10);
  v[0] = 1;
  v[1] = 2;
  v[2] = 3;
  v[3] = 1;
  v[4] = 4;
  v[5] = 1;
  v[6] = 5;
  v[7] = 6;
  v[8] = 9;
  v[9] = 1;

  cout << "There are " << frequency(v, 1) << " ones in this vector." << endl;

  return 0;
}
