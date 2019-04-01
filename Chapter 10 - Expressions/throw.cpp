// Throw operator
// throw.cpp
#include <iostream>
#include <exception>
int divide(int x, int y){
    int retVal;
    if(y == 0){
        retVal = 0;
        throw "divide by zero inadmissible";
    } else {
        retVal = x / y;
    }
    return retVal;
}

int main(){
    int dividend, divisor, quotient = 0;
    std::cout << "Enter dividend : ";
    std::cin >> dividend;
    std::cout << "Enter divisor : ";
    std::cin >> divisor;
    try{
        quotient = divide (dividend, divisor);
    }
    catch(const char* error){
        std::cerr << "Error: " << error << std::endl;
    }
    std::cout << "Quotient = " << quotient << std::endl;
}