// Pointing to a String Literal
// ptrToStringLiteral.cpp
// this file causes segmentation fault

#include <iostream>
int main(){
    char* p = "Avoid overwriting"; //poor coding style
    p[0] = 'a';
    std::cout << p << std::endl; //might cause a run-time error; caused a segmentation fault
    return 0;
}