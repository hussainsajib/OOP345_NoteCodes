// Multiple Inheritance - Cube
// Cube.cpp

#include "Cube.h"
Cube::Cube(double l) : len(l){}
double Cube::volume() const{
    return len * len * len;
}