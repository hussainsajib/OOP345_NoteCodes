// Binary Access - Binary or Text
// binary.cpp
#include <iostream>
#include <iomanip>
#include <fstream>
int main(int argc, char* argv[]){
    double x;
    std::cout << std::fixed << std::setprecision(15);

    //binary access
    std::fstream f(argv[1], std::ios::in | std::ios::out | std::ios::trunc | std::ios::binary);
    x = 1.0 / 3.0;
    f.write((char*)&x, sizeof(x));
    f.seekg(0,std::ios::beg);
    f.read((char*)&x, sizeof(x));
    std::cout << x << std::endl;

    //text access
    std::fstream t(argv[2], std::ios::in | std::ios::out | std::ios::trunc);
    x = 1.0 / 3.0;
    t << x; 
    t.seekg(0, std::ios::beg);
    t >> x;
    std::cout << x << std::endl;
}