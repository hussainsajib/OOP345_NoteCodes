//Function Template
//swap.cpp
#include <iostream>
#include "swap.h"
int main(int argc, char* argv[]){
    if(argc > 4){
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        long d = atof(argv[3]);
        long e = atof(argv[4]);
        swap(a,b);
        std::cout << "Swapped values are : " << a << " and " << b << std::endl;
        swap(d,e);
        std::cout << "Swapped values are : " << d << " and " << e << std::endl;
    }
    return 0;
}