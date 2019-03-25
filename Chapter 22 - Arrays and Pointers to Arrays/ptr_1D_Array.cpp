// Pointer to a 1D Array
// ptr_1D_Array.cpp
#include <iostream>

const int size = 3;

int main(){
    int i;
    int (*ptr)[size] = (int (*)[size]) new int [size];
    (*ptr)[0] = 10;
    (*ptr)[1] = 20;
    (*ptr)[2] = 30;
    for(i = 0; i < size; i++){
        std::cout << (*ptr)[i] << ' ';
    }
    std::cout << std::endl;
    delete[]ptr;

}