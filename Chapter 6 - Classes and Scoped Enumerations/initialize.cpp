//Initializing Data Members
//initialize.cpp
#include <iostream>
#include <string>

int nItems = 0;

class Item{
    int item = ++nItems;
    const std::string name {"empty"};
public:
    Item(){};
    Item(const char* n) : name{n}{}
    Item(const char* n, int i) : name{n}, item{i}{}
    const char* itemName() const { return name.c_str(); }
    int itemNo() const { return item; }
};

int main(){
    std::cout << nItems << std::endl;
    Item a;
    std::cout << a.itemName() << ' ' << a.itemNo() << std::endl;
    Item b("apple");
    std::cout << b.itemName() << ' ' << b.itemNo() << std::endl;
    Item c("grape", 6);
    std::cout << c.itemName() << ' ' << c.itemNo() << std::endl;
    std::cout << nItems << std::endl;
    return 0;
}