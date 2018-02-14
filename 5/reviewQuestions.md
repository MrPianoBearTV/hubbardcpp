# 5. Functions

## 5.3.

A declaração de uma função tem de estar sempre antes de a função ser chamada sendo que pode ser definida mais tarde.

### Ex:

```c++
#include <iostream>
using namespace std;

void testFunction() {
  cout << "Hello World!" << endl;
}

int main() {
  testFunction();
  return 0;
}
```

Seria igual a:

```c++
#include <iostream>
using namespace std;

void testFunction();

int main() {
  testFunction();
  return 0;
}

void testFunction() {
  cout << "Hello World!" << endl;
}
```
