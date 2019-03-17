// Smart Pointers - Unsafe Exception
// unsafe_exception.cpp
#include <iostream>
#include "Title.h"

void display(const char* t){
    Title* tt = new Title(t);
    tt->display(); //calls display(), which inturn calls validTitle(), which may throw exception
    delete tt;
}

int main(){
    const char* s[] = { "Mr.", "Ms.", "", "Dr."};
    for(auto x: s){
        try{
            display(x);
        }
        catch(const char* msg){
            std::cerr << msg << std::endl;
        }
    }
    return 0;
}