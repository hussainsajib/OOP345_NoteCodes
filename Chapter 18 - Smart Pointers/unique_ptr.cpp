// Unique Ownership
// unique_ptr.cpp
#include <iostream>
#include <memory>
#include "Title.h"
void display(const char* t){
    std::unique_ptr<Title> tt(new Title(t));
    tt->display();
    Title ttt = *tt;
    ttt.display();
}

int main(){
    const char* s[] = { "Mr.", "Ms.", "", "Dr."};
    for(auto x : s){
        try{
            display(x);
        } catch (const char* msg){
            std::cerr << msg << std::endl;
        }
    }
    return 0;
}