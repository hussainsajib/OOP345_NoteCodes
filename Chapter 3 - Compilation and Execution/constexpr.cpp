//Compiler-Evaluated Expressions
//constexpr.cpp
#include <iostream>
constexpr int N = 8;
constexpr int factorial(int i){
    return i > 1 ? i * factorial(i - 1) : 1;
}

int main(){
    volatile int n { N };
    std::cout << n << "! = " << factorial(n) << std::endl;
    system("pause");
    return 0;
}