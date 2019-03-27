// Replicated Base Classes
// NCube.cpp
#include <iostream>
#include "NCube.h"
NCube::NCube(const char* n, double l) : Name(n), len(l){}
double NCube::volume() const {
    return len * len * len;
}