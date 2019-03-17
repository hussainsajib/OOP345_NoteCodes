//Iterators - Vectors
//iterator.cpp

#include <iostream>
#include <vector>
int main(){
    std::vector<double> prices;
    std::vector<double>::iterator i;
    prices.push_back(10.43);
    prices.push_back(20.54);
    prices.push_back(32.43);
    for(i = prices.begin(); i != prices.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    return 0;
}