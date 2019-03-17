//Sequential Containers - Vectors
//vector.cpp
#include <iostream>
#include <vector>
int main(){
    std::vector<double> prices;
    if(prices.empty()){
        std::cout << "Prices is empty" << std::endl;
    }
    prices.push_back(10.43);
    prices.push_back(20.54);
    prices.push_back(32.43);
    for(unsigned i = 0; i < prices.size(); i++){
        std::cout << prices[i] << " ";
    }
    std::cout << std::endl;
    prices.front() = 54.11;
    prices.pop_back();
    for(unsigned i = 0; i < prices.size(); i++){
        std::cout << prices[i] << " ";
    }
    std::cout << std::endl;
    return 0;


}