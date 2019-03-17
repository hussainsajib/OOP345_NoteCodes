//Type Alignment
//align.cpp
#include <iostream>
//A is allocated at 4-byte bounderies
struct A{
    int n;
    char c;
};
struct alignas(16) B {
    int n;
    char c;
};
int main(){
    A a[]{1, 'a', 2, 'b', 3, 'c'};
    std::cout << "align of A = " << alignof(A) << std::endl;
    for(int i = 0; i < 3; ++i){
        std::cout << &a[i] << ": " << a[i].n << ", " << a[i].c << std::endl;
    }
    B b[]{1, 'a', 2, 'b', 3, 'c'};
    std::cout << "align of B = " << alignof(B) << std::endl;
    for(int i = 0; i < 3; ++i){
        std::cout << &b[i] << ": " << b[i].n << ", " << b[i].c << std::endl;
    }
    return 0;
}