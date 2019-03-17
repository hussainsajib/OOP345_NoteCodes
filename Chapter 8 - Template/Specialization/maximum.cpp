//Template Specialization
//maximum.cpp
#include <iostream>
#include "maximum.h"
int main(int argc, char* argv[]){
    if(argc > 4){
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        const char* d = argv[3];
        const char* e = argv[4];
        double c = maximum(a, b);
        std::cout << "Greater of " << a << ", " << b << " is " << c << std::endl;

        const char* f = maximum(d,e);
        std::cout << "Greater of " << d << ", " << e << " is " << f << std::endl;
    }
    return 0;
}