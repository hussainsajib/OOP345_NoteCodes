// Reference to a Pointer
// ref_to_ptr.cpp
#include <iostream>

void swap(int*& a, int*& b){
    int* t = a;
    a = b; 
    b = t;
}

int main(){
    int x, y;
    int* p = &x;
    int* q = &y;
    std::cout << "p = " << p << std::endl;
    std::cout << "q = " << q << std::endl;
    swap(p, q);
    std::cout << "p = " << p << std::endl;
    std::cout << "q = " << q << std::endl;
    return 0;
}