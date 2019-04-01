// Post-Fix Operators
// postfix.cpp
#include <iostream>
int main(){
    int i = 10;
    std::cout << i++ << std::endl;
    (i++)++;        //ERROR: expression must be modifiable lvalue
    std::cout << i << std::endl;
}