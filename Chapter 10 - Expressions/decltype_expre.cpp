// decltype with expressions
// decltype_expre.cpp
#include <iostream>
int main(){
    int i = 3, j = 6;
    double x = 4.5;
    double& r = x;
    decltype(i + j) y = i + j;
    decltype(i + x) z = i + x;
    decltype(r)(s) = r;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << s << std::endl;

}