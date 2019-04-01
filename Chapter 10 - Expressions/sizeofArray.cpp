// sizeof Operator
// sizeofArray.cpp
#include <iostream>
int foo(double a[]){
    a[0] = 1.0;
    return sizeof a;
}
int main(){
    double a[] = {1.1, 2.2, 3.3, 4.4};
    std::cout << sizeof a << std::endl;
    std::cout << foo(a) << std::endl;
}