//Static Assertion
//static_assert.cpp
#include <iostream>
constexpr int N = 0;
constexpr int factorial(int i){
    return i > 1 ? i * factorial(i - 1) : 1;
}
int main(){
    static_assert(N > 0, "N <= 0");
    static_assert(N < 20, "N >= 20");
    volatile int n { N };
    std::cout << n << "! = " << factorial(n) << std::endl;
    system("pause");
    return 0;
}