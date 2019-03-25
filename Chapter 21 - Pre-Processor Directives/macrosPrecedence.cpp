// Macros Avoid Precedence Errors
// MacrosPrecedence.cpp

#include <iostream>
#define PI 3.14
#define SQUARE(X) ((X) * (X))
int main(){
    std::cout << "PI(2.34 + 1)^2 is " << PI * SQUARE(2.35 + 1) << std::endl;
    return 0;
}