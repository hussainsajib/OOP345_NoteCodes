//liskov_rectangle_.cpp
//Incorrect - Initial design

#include <iostream>
using namespace std;

class Rectangle {
  double width;
  double height;
public:
  void setWidth(double w) { width = w; }
  void setHeight(double h) { height = h; }
  double getWidth() const { return width; }
  double getHeight() const { return height; }
};

void set(Rectangle& r, double d){
  r.setWidth(d);
}

int main(){
  Rectangle r;
  r.setWidth(10.0);
  r.setHeight(30.0);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  set(r, 25.0);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  return 0;
}