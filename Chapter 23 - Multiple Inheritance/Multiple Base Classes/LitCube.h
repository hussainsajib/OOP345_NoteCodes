// Multiple Inheritance - LitCube
// LitCube.h
#include "Cube.h"
#include "LitObj.h"
class LitCube : public Cube, public LitObj {
public:
    LitCube(double len, ulong c);
};