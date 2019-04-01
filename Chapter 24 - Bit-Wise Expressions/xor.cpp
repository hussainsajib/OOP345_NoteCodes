// Bitwise Exclusive or
// xor.cpp
#include <iostream>
int main(){
    unsigned char u = 27u;
    unsigned char v = 14u;
    std::cout << (unsigned)u << " ^ " << (unsigned)v << " = " << (u ^ v) << std::endl;
    std::cout << (unsigned)u << " ^ " << (unsigned)v << " ^ " << (unsigned)v << " = " << (u ^ v ^ v) << std::endl;
}