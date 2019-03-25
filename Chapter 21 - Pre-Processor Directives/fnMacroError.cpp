// Function-Like Macros
// fnMacrosError.cpp
#include <iostream>
#define PI 3.14
#define AREA (R) PI * R * R //whitespace before (R)

int main(){
    double area = AREA(2.35); //identifier R is undefined
    std::cout << "Area is " << area << std::endl;
}