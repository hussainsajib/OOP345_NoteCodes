//Aggregation
//aggregation.cpp
#include "Club.h"
#include "Name.h"
int main(){
    Name jane("Jane");
    Name john("John");
    Name alice("Alice");
    Name frank("Frank");
    Name stanley("Stanley");
    Club c;
    c += jane;
    c += john;
    c += alice;
    c += frank;
    c.display();
    c -= alice;
    c -= john;
    c -= stanley;
    c.display();
    return 0;
}