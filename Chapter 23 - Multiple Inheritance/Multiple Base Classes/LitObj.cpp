// Multiple Inheritance - LitObj
// LitObj.cpp
#include "LitObj.h"
LitObj::LitObj(ulong c) : color(c){}
ulong LitObj::emission() const { return color; }