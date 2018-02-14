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

## 5.8. 

Ao passar um parâmetro por _reference_ o seu valor pode ser modificado dentro da função enquanto que ao passar um parâmetro por _constant reference_ o seu valor não pode ser modificado dentro da função e apenas lido _(reference - **read/write** , constant reference - **read** )_ .
