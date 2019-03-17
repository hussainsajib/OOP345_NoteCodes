//liskov_square.cpp
//Correct Design - Initial

#include <iostream>
using namespace std;

class Square {
  double width;
public:
  void setWidth(double w){ width = w; }
  double getWidth() const {return width; }
};

void set(Square& s, double d){
  s.setWidth(d);
}

int main(){
  Square s;
  s.setWidth(20.0);
  cout << "Square : " << s.getWidth() << endl;

  set(s,15.0);
  cout << "Square : " << s.getWidth() << endl;
  return 0;
}