// Pointer Subtraction
// pointerSubtraction.cpp
#include <iostream>
#include <cstddef>
int main(){
    int a[] = { 1, 2, 3, 4, 5 }, i = 2, *p, *r;
    ptrdiff_t k;
    p = &a[4];
    r = &a[0];
    k = p - r;
    std::cout << *(p - i) << std::endl;
    std::cout << k << std::endl;
    return 0;
}