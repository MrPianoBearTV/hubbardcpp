#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void remove_duplicates(vector<int>& v) {
  for (vector<int>::iterator xt = v.begin(); xt != v.end();) {
    vector<int>::iterator yt = find(v.begin(), v.end(), *xt);
    if (xt == yt) {
      xt++;
    } else {
      xt = v.erase(xt);
    }
  }
}

void printVector(vector<int>& v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

}

int main() {

  vector<int> v;
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(5);
  v.push_back(1);
  v.push_back(6);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(9);
  v.push_back(1);
  v.push_back(2);
  v.push_back(1);
  v.push_back(3);
  v.push_back(1);
  v.push_back(9);
  v.push_back(1);

  cout << "Before removing duplicates: ";
  printVector(v);
  cout << endl;

  remove_duplicates(v);

  cout << "After removing duplicates: ";
  printVector(v);
  cout << endl;

  return 0;
}
