// String Constants
// ptrToConstStringLiteral.cpp
#include <iostream>
int main(){
    const char* p = "Avoid overwriting"; //good coding style
    p[0] = 'a'; //causes a compile-time error
    std::cout << p << std::endl;
    return 0;
}