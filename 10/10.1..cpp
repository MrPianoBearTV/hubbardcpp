#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
  Point(double x=0, double y=0, double z=0) : x(x), y(y), z(z) {}
  Point(const Point& p) : x(p.x), y(p.y), z(p.z) {}
  void negate() { x *= -1; y *= -1; z *= -1; }
  double norm() { return sqrt(pow((0 - x), 2) + pow((0 - y), 2) + pow((0 - z), 2)); }
  //void print() { cout << "x: " << x << ", y: " << y << ", z:" << z << endl; }
  void print() { cout << '(' << x << ", " << y << ", " << z << ')'; }
private:
  double x, y, z;
};

int main() {
  
  Point x(3, 3, 3);
  cout << "x: ";
  x.print();
  cout << endl;

  Point y(x);
  cout << "y: ";
  y.print();
  cout << endl;

  y.negate();

  cout << "y: ";
  y.print();
  cout << endl;

  cout << "x norm: " << x.norm() << endl;
  cout << "y norm: " << y.norm() << endl;


}
