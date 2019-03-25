// Macro Efficiency
// effMacro.cpp
#include <iostream>
#include <ctime>
#define PRODUCT(X,Y) (X) * (Y)
#define NITER 1000000000
int main(){
    double x;
    int i;
    std::clock_t c0, c1;
    x = 1;
    c0 = std::clock();
    for(i = 0; i < NITER; i++){
        x = PRODUCT(x , 1.0000000001);
    }
    c1 = std::clock();
    std::cout << "Process time is " << (double)(c1 - c0) / CLOCKS_PER_SEC << " secs" << std::endl;
    std::cout << "Value of x is " << x << std::endl;
    return 0;
}