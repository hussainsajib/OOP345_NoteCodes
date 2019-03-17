// Shared Ownership
// shared_ptr.cpp
#include <iostream>
#include <memory>
#include "Title.h"

void display(const char* t){
    std::shared_ptr<Title> tt1 (new Title(t));
    tt1->display();
    std::shared_ptr<Title> tt2 (tt1);
    tt2->display();
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