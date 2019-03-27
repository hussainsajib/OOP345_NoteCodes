// Replicated Base Classes
// NLitObj.cpp
#include <iostream>
#include "NLitObj.h"
NLitObj::NLitObj(const char* n, ulong c) : Name (n), color(c){}
ulong NLitObj::emission() const { return color; }