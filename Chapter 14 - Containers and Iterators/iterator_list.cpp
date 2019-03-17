//Iterators - Insertion and Removal
//iterator_list.cpp
#include <iostream>
#include <list>
int main(){
    std::list<double> prices;
    prices.push_back(10.43);
    prices.push_back(20.54);
    prices.push_back(32.43);
    prices.insert(--prices.end(),12.52);
    prices.erase(++prices.begin());
    for(auto i = prices.begin(); i != prices.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}