// String Constants
// ptrToConstStringLiteral.cpp
//this file will not compile

#include <iostream>
int main(){
    const char* p = "Avoid overwriting"; //good coding style
    p[0] = 'a'; //causes a compile-time error
    std::cout << p << std::endl;
    return 0;
}