// sizeof Operator
// sizeofStruct.cpp

#include <iostream>
typedef struct{
    char a;
    int b;
} A;

int main(){
    A s;
    std::cout << sizeof s << std::endl;
}