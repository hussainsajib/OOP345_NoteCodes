// Smart Pointers - Safe Exception
// safe_exception.cpp
#include <iostream>
#include "Title.h"

Title* getChecked(const char* t){
    Title* tt = new Title(t);
    return tt;
}
void display(const char* t){
    Title* tt = new Title(t);
    try{
        tt->display();
    }
    catch(...){
        delete tt;
        throw; //continue throwing
    }
    delete tt;
}
int main(){
    const char* s[] = { "Mr.", "Ms.", "", "Dr."};
    for(auto x : s){
        try{
            display(x);
        } catch(const char* msg){
            std::cerr << msg << std::endl;
        }
    }
    return 0;
}