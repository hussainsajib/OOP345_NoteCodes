//Template Specialization
//maximum.h
#include <cstring>

template<typename T>
T maximum(T a, T b){
    return a > b ? a : b;
}
