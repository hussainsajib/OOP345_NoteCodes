// Function-Like Macros
// fnMacros.cpp

#include <iostream>
#define PI 3.14
#define AREA(R) PI * R * R

int main(){
    double area = AREA(2.35);
    std::cout << "Area is " << area << std::endl;
}