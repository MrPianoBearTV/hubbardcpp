#include <iostream>
using namespace std;

int main() {

  unsigned int a[] = {22, 44, 66, 88};

  cout << "a   = " << a   << ", a[0] -> *a     = " << *a   << endl;
  cout << "a+1 = " << a+1 << ", a[1] -> *(a+1) = " << *(a+1) << endl;
  cout << "a+2 = " << a+2 << ", a[2] -> *(a+2) = " << *(a+2) << endl;
  cout << "a+3 = " << a+3 << ", a[3] -> *(a+3) = " << *(a+3) << endl;

  return 0;
}
