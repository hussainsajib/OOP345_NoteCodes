// Smart Pointers
// Title.h
#include <iostream>
class Title{
    const char* title; //cant assign char* to const char*; so, changed the type.
    const char* validTitle() const {
        if(!title[0]) { throw "invalid title"; }
        return title;
    }
public:
    Title(const char* t) : title(t) {}
    void display() const {
        std::cout << validTitle() << std::endl;
    }
};