// Pointer Addition
// pointerAddition.cpp
#include <iostream>
int main(){
    double a[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int i = 2;
    double* p;
    p = &a[1];
    std::cout << std::hex;
    std::cout << a[0]  << " : " << a << std::endl;
    std::cout << *(p + i) << " : " << p + i << std::endl;
    std::cout << p[i] << " : " << &p[i] << std::endl;
    return 0;
}