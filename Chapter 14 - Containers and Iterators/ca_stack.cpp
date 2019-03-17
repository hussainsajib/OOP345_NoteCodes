//Container Adapters - Stacks
//ca_stack.cpp
#include <iostream>
#include <stack>
int main(){
    std::stack<double> prices;
    prices.push(10.43);
    prices.push(20.54);
    prices.push(32.43);
    prices.top() = 5.41;
    while(!prices.empty()){
        std::cout << prices.top() << " ";
        prices.pop();
    }
    std::cout << std::endl;

    
}