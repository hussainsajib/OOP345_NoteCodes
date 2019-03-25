// Function-Like Macros
// fnMacrosTriangle.cpp
#include <iostream>
#define TRIANGLE_AREA(A, B) 0.5 * B * A

int main(){
    double area = TRIANGLE_AREA(2.5, 4);
    std::cout << "Area is " << area << std::endl;
}