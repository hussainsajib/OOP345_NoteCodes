// Pre-fix Operators
// prefix.cpp
#include <iostream>
int main(){
    int i = 10;
    std::cout << ++i << std::endl;
    ++(++i);
    std::cout << i << std::endl;
}