// Smart POinter for tile
// SPtrToTitle.cpp

#include <iostream>
#include "Title.h"
#include "SPtrToTitle.h"
void display(const char* t){
    SPtrToTitle tt(new Title(t));
    tt->display();
}
int main(){
    const char* s[] = {"Mr.", "Ms.", "", "Dr."};
    for(auto x : s){
        try{
            display(s);
        } catch(const char* msg){
            std::cerr << msg << std::endl;
        }
    }
    return 0;
}

