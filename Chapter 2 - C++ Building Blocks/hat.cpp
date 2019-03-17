//Extend Namespace for hat
//hat.cpp
#include "hat.h"
namespace hat{
    const char* leader(char* s){
        for(int i = 0; i < ML; i++){
            s[i] = '^';
        }
        s[ML] = '\0';
        return s;
    }
}