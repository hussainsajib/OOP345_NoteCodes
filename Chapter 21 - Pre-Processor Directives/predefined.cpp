// Predefined Macros
// predefined.cpp
#include <iostream>
int main(){
    std::cout << "The name of the source file is " << __FILE__ << std::endl;
    std::cout << "The date of its pre-processing is " << __DATE__ << std::endl;
    std::cout << "The time of its preprocessing is " << __TIME__ << std::endl;
    return 0;
}