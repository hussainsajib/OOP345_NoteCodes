// Bitwise Expressions - Right Shift
// right.cpp
#include <iostream>
#include <climits>

int main(){
    unsigned u, v;
    int w;
    u = 27u;
    v = 1u << sizeof(unsigned) * CHAR_BIT - 1;
    w = -1;
    std::cout << u << " >> " << 2 << " = " << (u >> 2) << std::endl;
    std::cout << v << " >> " << 8 << " = " << (v >> 8) << std::endl;
    std::cout << w << " >> " << 2 << " = " << (w >> 2) << std::endl;

}