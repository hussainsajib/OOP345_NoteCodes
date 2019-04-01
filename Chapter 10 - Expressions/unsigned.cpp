// Post-Fix operators on unsigned values
// unsigned.cpp
#include <iostream>
int main(){
    unsigned i = 0u;
    i--;
    std::cout << i++ << std::endl;
    std::cout << i << std::endl;
}