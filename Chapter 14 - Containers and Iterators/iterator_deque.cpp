//Iterators - Insertion and Removal
//iterator_deque.cpp
#include <iostream>
#include <deque>
int main(){
    std::deque<double> p(3, 10.50);
    p.back() = 32.43;
    p.erase(p.begin());
    for(auto i = p.begin(); i != p.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    p.insert(++p.begin(),15.64);
    p.insert(p.end(),20.32);
    for(auto i = p.begin(); i != p.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    return 0;
}