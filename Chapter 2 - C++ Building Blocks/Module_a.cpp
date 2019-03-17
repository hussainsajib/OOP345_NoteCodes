//External Linkage
//Module_a.cpp
#include <iostream>
extern int share_me;
void display(){
    std::cout << "share_me at " << &share_me << std::endl;
    std::cout << "share_me is " << share_me++ << std::endl;
}
