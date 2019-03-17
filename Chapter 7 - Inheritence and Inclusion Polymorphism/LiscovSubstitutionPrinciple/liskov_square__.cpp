//liskov_square__.cpp

#include <iostream>
using namespace std;
class Rectangle{
  double width;
  double height;
public:
  virtual void setWidth(double w) { width = w; }
  virtual void setHeight(double h) { height = h; }
  double getWidth() const { return width; }
  double getHeight() const { return height; }
};

class Square : public Rectangle {
public:
  void setWidth(double s){
    Rectangle::setWidth(s);
    Rectangle::setHeight(s);
  }
  void setHeight(double s){
    Rectangle::setWidth(s);
    Rectangle::setHeight(s);
  }
};

void set(Rectangle& r){
  r.setWidth(3);
  r.setHeight(4);
  if(r.getWidth() * r.getHeight() != 12){
    cerr << "* volume isn\'t 12 *" << endl;
  }
}

int main(){
  Square s;
  s.setWidth(20);
  cout << "Square : " << s.getWidth() << endl;

  Rectangle r;
  r.setWidth(10);
  r.setHeight(30);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  
  set(s);
  cout << "Square : " << s.getWidth() << endl;

  set(r);
  cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << endl;
  return 0;
}