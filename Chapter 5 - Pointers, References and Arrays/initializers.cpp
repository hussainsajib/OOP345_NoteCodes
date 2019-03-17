//Aggregate Initialization
//initializers.cpp
#include <iostream>
int main(){
    const int n = 6;
    int a[] = {1, 2, 3};
    int b[] {4, 5, 6};
    int c[5] {7, 8, 9};
    int d[5]{};
    int* f = new int [n] { 10, 11, 12 };
    int* g = new int [n] {};
    for(int& e: a){ std::cout << e; }
    std::cout << '|' << std::endl;
    for(int& e: b){ std::cout << e; }
    std::cout << '|' << std::endl;
    for(int& e: c){ std::cout << e; }
    std::cout << '|' << std::endl;
    for(int& e: d){ std::cout << e; }
    std::cout << '|' << std::endl;
    for(int i = 0; i < n; ++i){ std::cout << f[i]; }
    std::cout << '|' << std::endl;
    for(int i = 0; i < n; ++i){ std::cout << g[i]; }
    std::cout << '|' << std::endl;
    delete[]f;
    delete[]g;
    return 0;

}