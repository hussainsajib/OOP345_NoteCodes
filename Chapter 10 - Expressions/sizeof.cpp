// Size of a type
// sizeof.cpp
#include <iostream>
int main(){
    double x;
    std::cout << "On this machine, \n"
    "the size of an int is " << sizeof(int)
    << "bytes,\nthe size of x is " <<
    sizeof x << "bytes" << std::endl;
}