// Replicated Base Classes
// NLitCube.cpp
#include <iostream>
#include "NLitCube.h"
NLitCube::NLitCube(const char* n, double l, ulong c) : NCube(n, l), NLitObj(n, c){}