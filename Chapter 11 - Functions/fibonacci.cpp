//Recursive Function
//fibonacci.cpp
#include <iostream>

unsigned factorial(unsigned x){
    return (x > 2u) ? x * (factorial(x-1)) : x;
}

int main(){
    unsigned number;
    std::cout << "Please enter a number to calculate factorial: ";
    std::cin >> number;
    std::cout << number << "! = " << factorial(number) << std::endl;
    std::cout << "2! = " << factorial(2) << std::endl;
    std::cout << "3! = " << factorial(3) << std::endl;
    std::cout << "4! = " << factorial(4) << std::endl;
    return 0;
}