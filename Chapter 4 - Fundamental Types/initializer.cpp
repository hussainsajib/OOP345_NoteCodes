//Initializer Expressions
//initializer.cpp
#include <iostream>
int main(){
    int n0 = 7;
    int n1 = 7.2;
    int n2 { 6 };
    int n3 = { 5 };

    std::cout << "n0 = " << n0 << std::endl;
    std::cout << "n1 = " << n1 << std::endl;
    std::cout << "n2 = " << n2 << std::endl;
    std::cout << "n3 = " << n3 << std::endl;

    return 0;
}