//Composition - Pointer Version
//Person.cpp
#include <iostream>
#include "Name.h"
#include "Person.h"
Person::Person(const char* n, int a) : name{new Name(n)}, age{a}{}
Person::Person(const Person& src) { *this = src; }
Person& Person::operator=(const Person& src){
    if(this != &src){
        delete name;
        name = new Name(*src.name);
        age = src.age;
    }
    return *this;
}
Person::~Person(){ delete name; }
void Person::display() const {
    std::cout << age << ' ' << name->get() << std::endl;
}
void Person::set(const char* n) {
    name->set(n);
}