//Function linkage - Main Module
//linkage_a.cpp
#include <iostream>

static void display(){ //internal linkage
    std::cout << "in module a" << std::endl;
}

void module_a(); //external linkage

int main(){
    display();
    return 0;
}