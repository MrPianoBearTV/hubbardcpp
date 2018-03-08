#include <iostream>
using namespace std;

int main() {


  string s = "ABCDEFGHIJKLMNOP";                       // define s como a string que está à direita do =
  cout << "s -> " << s << endl;                        // faz print da string s: "ABCDEFGHIJKLMNOP" 
  cout << "s.length() -> " << s.length() << endl;      // faz print do comprimento da string s: "16"
  s[8] = '!';                                          // muda a string s para: "ABCDEFGH!JKLMNOP"
  cout << "s -> " << s << endl;
  s.replace(8, 5, "xyz");                              // muda a string s para: "ABCDEFGHxyzNOP" // Nota: nas soluções está s.replace(10, 5, "xyz") em vez de s.replace(8, 5, "xyz")
  cout << "s -> " << s << endl;
  s.erase(6, 4);                                       // muda a string s para: "ABCDEFzNOP"     // Nota: nas soluções está s.erase(2, 4) em vez de s.erase(6,4)
  cout << "s -> " << s << endl;
  cout << "s.find(\"!\") -> " << s.find("!") << endl;  // faz print da localização do caracter '!', mas como este não se encontra na string faz print do npos "18446744073709551615", que é maior long unsigned e corresponde a "-1".
  cout << "s.find(\"?\") -> " << s.find("?") << endl;  // faz print da localização do caracter '?', mas como também não se encontra na string faz print do npos "18446744073709551615", que é maior long unsigned e corresponde a "-1".
  cout << "s.substr(6, 3)" << s.substr(6, 3) << endl;  // faz print da sub-string que começa na posição 6 e acaba na posição 9: "DEF" //Nota: nas soluções está s.subtr(3, 6) em vez de s.subtr(6, 3)
  s += "abcde";                                        // acrescenta a string "abcde" à string s, passando a string s a ser: "ABCDEFzNOPabcde"
  cout << "s = " << s << endl;
  string part(s, 4, 8);                                // define a string part como a substring que começa na posição 4 e tem length 8, sendo assim: "EFzNOPab"
  cout << "part = " << part << endl;
  string stars(8, '*');                                // define a string stars como 8x o caracter '*', sendo assim: "********"
  cout << "stars = " << stars << endl;


  return 0;
}
