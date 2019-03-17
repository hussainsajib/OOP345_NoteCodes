//Internal Linkage
//Module_b_internal.cpp
#include <iostream>
void display();
static int local = 2;

int main(){
    display();
    display();
    std::cout << "local is at : " << &local << std::endl;
    std::cout << "local is : " << local << std::endl;
    return 0;
}