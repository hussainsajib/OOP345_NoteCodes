// Multiple Inheritance - Cube
// Cube.h
#include "Shape.h"

class Cube : public Shape {
    double len;
public:
    Cube (double);
    double volume() const;
}