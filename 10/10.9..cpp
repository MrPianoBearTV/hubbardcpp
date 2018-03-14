#include <iostream>
#include <cmath>
using namespace std;

class Circle {
  
public:
  Circle(float x=0, float y=0, float radius=0) : _x(x), _y(y), _radius(radius) {}
  Circle(const Circle& c) : _x(c._x), _y(c._y), _radius(c._radius) {}
  float x() { return _x; }
  float y() { return _y; }
  float radius() { return _radius; }
  float area() {
    float pi = 102928.0/32763; // Using Milü as an approximation of pi
    return pi * pow(_radius, 2);
  }
  float circumference() {
    float pi = 102928.0/32763; // Using Milü as an approximation of pi
    return pi * _radius * 2;
  }
private:
  float _x;
  float _y;
  float _radius;
};

int main() {

  Circle c(2, -1, 4);
  Circle d(c);

  cout << "d: x:" << d.x() << ", y: " << d.y() << ", radius: " << d.radius() << ", area: " << d.area() << ", circumference: " << d.circumference() << endl;

  return 0;
}
