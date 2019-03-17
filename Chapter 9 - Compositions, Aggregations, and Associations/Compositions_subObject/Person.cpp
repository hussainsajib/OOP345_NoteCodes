//Composition - SubObject Version
//Person_subObject.cpp
#include <iostream>
#include "Person.h"
Person::Person(const char* n, int a) : name {n}, age{a}{}
void Person::display() const {
    std::cout << age << ' ' << name.get() << std::endl;
}
void Person::set(const char* n) { name.set(n); }