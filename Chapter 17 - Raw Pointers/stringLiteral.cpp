// String Literal
// stringLiteral.cpp
#include <iostream>
#include <cstring>
int main(){
    char* p = "May be overwritten";
    char s[19];
    std::strcpy(s,p);
    s[0] = 'm';
    std::cout << std::hex;
    std::cout << s << std::endl;
    std::cout << "s = " << (int)s << std::endl;
    std::cout << "p = " << (int)p << std::endl;
    return 0;
}