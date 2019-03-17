//Template Specialization
//maximum.h
#include <cstring>

template<typename T>
T maximum(T a, T b){
    return a > b ? a : b;
}

template<>
char* maximum<char*>(char* a, char* b){
    return std::strcmp(a,b) > 0 ? a : b;
}