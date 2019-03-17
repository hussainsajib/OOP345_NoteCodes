//External Linkage
//Module_b.cpp
#include <iostream>
//forward declaration of display()
void display();
int share_me = 0;
int main(){
    display();
    display();
    std::cout << "share_me at " << &share_me << std::endl;
    std::cout << "share_me is " << share_me << std::endl;
    return 0;
}
