//Class Functions - Implementation
//classFunction.cpp
#include <iostream>
#include "classFunction.h"
unsigned Horse::noHorses = 0;
Horse::Horse(unsigned a) : age{a}, no{++noHorses}{}
void Horse::display() const{
    std::cout << "Horse " << no << " is " << age << " years old" << std::endl;
}
Horse::~Horse() { noHorses--; }
unsigned Horse::howMany() { return noHorses; }
