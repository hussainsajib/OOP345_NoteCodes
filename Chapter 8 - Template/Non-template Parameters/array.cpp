//Non-type Template Parameters
//array.cpp
#include <iostream>
#include "array.h"
int main(){
    Array<int, 50>a, b;
    for(int i = 0; i < 5; i++) { a[i] = i * i; }
    b = a;
    for(int i = 0; i < 5; i++) { std::cout << b[i] << ' '; }
    std::cout << std::endl;
    return 0;
}