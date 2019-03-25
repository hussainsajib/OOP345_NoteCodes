// Macros A Potential Error
// macrosPotError.cpp
#include <iostream>
#define PI 3.14
#define SQUARE(x) x * x //OK

int main(){
    std::cout << "PI(2.35)^2 is " << PI * SQUARE(2.35) << std::endl;
    return 0;
}