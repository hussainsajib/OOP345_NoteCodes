//Function Linkage - Module A
//linkage_b.cpp
#include <iostream>

static void display(){ //internal linkage
    std::cout << "in module b" << std::endl;
}

void module_b(){ //external linkage
    display();
}