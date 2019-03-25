// Dynamic Allocations of an Array
// dynamic.cpp

#include <iostream>
#include <iomanip>
int main(){
    int c;
    int* a;
    std::cout << "Number of elements : ";
    std::cin >> c;

    a = new int[c];

    for(int i = 0; i < c; i++){
        a[i] = (i + 1) * (i + 1);
    }
    for(int i = 0; i < c; i++){
        std::cout << std::setw(3) << i + 1 << std::setw(6) << a[i] << std::endl;
    }
    delete[]a;
    return 0;
}