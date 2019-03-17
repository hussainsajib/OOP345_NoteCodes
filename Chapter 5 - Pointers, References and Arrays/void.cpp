//Generic Pointer Type
//void.cpp
#include <iostream>
int main(){
    int i;
    void* v = &i;
    int* j;
    j = static_cast<int*>(v);
    std::cout << &i << std::endl;
    std::cout << j << std::endl;
    return 0;
}