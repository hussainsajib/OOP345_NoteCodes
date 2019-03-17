//Functional - Function wrapper
//function_wrapper.cpp

#include <iostream>
#include <functional>

long multiply(long x, long y) { return x * y; }
struct Multiply{
    long operator()(long x, long y) { return x * y; }
};

int main(){
    std::function<long(long, long)> f1 = multiply;
    std::function<long(long, long)> f2 = Multiply();
    std::function<long(long, long)> f3 = [](long x, long y)->decltype(x * y) {return x * y; };
    std::cout << "Output of function pointer, f1 (10, 2) : " << f1(10, 2) << std::endl;
    std::cout << "Output of function object, f2 (10, 2) : " << f2(10, 2) << std::endl;
    std::cout << "Output of lambda expression, f3 (10, 2) : " << f3(10, 2) << std::endl;
}