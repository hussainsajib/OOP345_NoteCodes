//liskoc_rectangle.cpp
//Correct Design - upgraded

#include <iostream>
using namespace std;

class Square{
  double width;
public:
  void setWidth(double w) { width = w; };
  double getWidth() const { return width; }
};

class Rectangle : public Square {
  double height;
public:
  void setHeight(double h) { height = h; }
  double getHeight() const { return height; }
};

void set(Square& s, double d){
  s.setWidth(d);
}

int main () {
  Square s;
  s.setWidth(20.0);
  cout << "Square : " << s.getWidth() << endl;
  Rectangle r;
  r.setWidth(10.0);
  r.setHeight(30.0);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  set(s, 15.0);
  cout << "Square : " << s.getWidth() << endl;
  set(r, 25.0);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  return 0;
}