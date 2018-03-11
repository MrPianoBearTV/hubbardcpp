#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

  char c;
  string word, first, last;
  bool isFirstName = true, isSurname = true;
  int noNames = 10, nameLength = 32;
  string names[noNames][nameLength];
  int i = 2, j = 0;

  while(cin >> word) {
    cin.get(c);

    isFirstName = isSurname;
    isSurname = (c == '\n');

    if (isFirstName) {
      names[j][1] = word;
    } else if (isSurname) {
      names[j][0] = word;
    } else {
      string middleName = word.substr(0, 1) + '.';
      names[j][i] = middleName;
      i++;
    }

    if (j == noNames - 1) {
      break;
    }

    if (c == '\n' && j + 1 < noNames) {
      j++;
      i = 2;
    }
  }

  for (int x = 0; x < noNames; x++) {
    cout << names[x][0] << ", " << names[x][1];

    for (int y = 2; y < nameLength; y++) {
      if (names[x][y].empty()) {
        break;
      } else {
        cout << " " << names[x][y];
      }
    }

    cout << endl;
  }


  return 0;
}
