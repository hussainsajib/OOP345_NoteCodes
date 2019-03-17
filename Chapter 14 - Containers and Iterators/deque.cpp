//Sequential Containers - Double-Ended Queues
//deque.cpp
#include <iostream>
#include <deque>

int main(){
    std::deque<double> prices(3,10.50), costs;
    prices.back() = 32.43;
    prices.pop_front();
    for(unsigned i = 0; i < prices.size(); i++){
        std::cout << prices[i] << " ";
    }
    std::cout << std::endl;
    costs = prices;
    costs.push_front(5.64);
    costs.push_front(20.31);
    costs.at(1) +=10;
    for(auto i: costs){ std::cout << i << " "; }
    std::cout << std::endl;
}