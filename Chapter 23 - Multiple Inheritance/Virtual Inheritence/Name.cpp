// Replicated Base Classes
// Name.cpp
#include <iostream>
#include <iomanip>
#include "Name.h"
Name::Name(const char* n) : name(n){}
void Name::display() const{
    std::cout << std::left << std::setw(10) << name << std::right << std::endl;
}