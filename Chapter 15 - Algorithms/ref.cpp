// Functional - create a reference wrapper
// ref.cpp
#include <iostream>
#include <functional>

void increment(int& x, int& y) { ++x, ++y; }

int main(){
    int a {10}, b {20};
    increment(std::ref(a), std::ref(b));
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
}