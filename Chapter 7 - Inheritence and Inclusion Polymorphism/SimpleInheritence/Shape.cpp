//Shape.cpp

#include <iostream>
#include "Cube.h"
#include "Sphere.h"
using namespace std;

void displayVolume(const Shape* shape){
  if(shape){
    cout << shape->volume() << endl;
  }
  else {
    cout << "Error" << endl;
  } 
}

Shape* select(){
  Shape* shape;
  double x;
  char c;
  cout << "s (sphere), c (cube) : ";
  if(c == 's'){
    cout << "dimension : ";
    cin >> x;
    shape = new Sphere(x);
  }
  else if(c == 'c'){
    cout << "dimension : ";
    cin >> x;
    shape = new Cube(x);
  }
  else {
    shape = nullptr;
  }
  return shape;
}


int main () {
  Shape* shape = select();
  displayVolume(shape);
  delete shape;
  return 0;
}