// Binary Access - Writing
// writeBinary.cpp
#include <fstream>
int main(int argc, char* argv[]){
    char str[] = "Hello, World!";
    char* p = str;
    std::ofstream f (argv[1], std::ios::out | std::ios::trunc | std::ios::binary);
    //ostream& write (const char* s, streamsize n);
    //f.write(str, sizeof str -1);
    for(auto i = 0; i < sizeof str; i++) { f.write(p++, 1);}
}