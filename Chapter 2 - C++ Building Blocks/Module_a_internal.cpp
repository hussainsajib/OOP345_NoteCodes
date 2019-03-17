//Internal Linkage
//Module_a_internal.cpp
#include <iostream>
static int local = 4;
void display(){
    std::cout << "local is at " << &local << std::endl;
    std::cout << "local is " << local++ << std::endl;
}