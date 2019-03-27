// Multiple Inheritance
// multiple.cpp
#include <iostream>
#include "LitCube.h"

int main(){
    LitCube lc(2, 0xccdd33ffUL);
    std::cout << "volume = " << lc.volume() << std::endl;
    std::cout << "emission = " << lc.emission() << std::endl;
}