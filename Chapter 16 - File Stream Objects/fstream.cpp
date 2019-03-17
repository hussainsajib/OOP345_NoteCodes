// File Objects - writing and reading
// fstream.cpp
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::fstream f(argv[1], std::ios::in | std::ios::out | std::ios::trunc);
    f << "Line 1" << std::endl;
    f << "Line 2" << std::endl;
    f << "Line 3" << std::endl;
    f.seekp(0,std::ios::beg);
    f << "****";
    f.seekp(4,std::ios::cur);
    f << "#";
    std::streampos p = f.tellp();
    f.seekp(0,std::ios::end);
    f << "The last line\n";
    f.seekp(p);
    f << '^';

    char c;
    f.seekg(0,std::ios::beg);
    while(f.get(c)){ std::cout << c; }
    f.clear();
    f.seekg(-8,std::ios::end);
    while(f.get(c)) { std::cout << c; }
    f.clear();
}