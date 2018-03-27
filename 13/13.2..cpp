#include <iostream>
#include <string>
using namespace std;

template <class T>
int search(T a[], T toFind, int lowerBound, int upperBound) {

  int i;

  while (lowerBound <= upperBound) {
    i = (lowerBound + upperBound) / 2;

    if (a[i] == toFind) {
      return i;
    } else if (a[i] < toFind) {
      lowerBound = i + 1;
    } else if (a[i] > toFind) {
      upperBound = i - 1;
    }
  }

  return -1; // couldn't find element

}

void print(char x, int pos) {
  if (!(pos < 0)) {
    string ordinalIndicator = (pos <= 3 ? (pos <= 2 ? (pos == 1 ? "st" : "nd") : "rd") : "th");
    cout << "\'" << x << "\' is the " << pos << ordinalIndicator << " letter of the alphabet." << endl;
  } else {
    cout << "\'" << x << "\' is not a letter of the alphabet." << endl;
  }
}

int main() {
  char alphabet[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  char char1 = 'j';
  int pos1 = search(alphabet, char1, 1, 27);
  print(char1, pos1);

  char char2 = 'r';
  int pos2 = search(alphabet, char2, 1, 27);
  print(char2, pos2);

  char char3 = 'c';
  int pos3 = search(alphabet, char3, 1, 27);
  print(char3, pos3);

  char char4 = 'n';
  int pos4 = search(alphabet, char4, 1, 27);
  print(char4, pos4);

  char char5 = 'p';
  int pos5 = search(alphabet, char5, 1, 27);
  print(char5, pos5);

  return 0;
}
