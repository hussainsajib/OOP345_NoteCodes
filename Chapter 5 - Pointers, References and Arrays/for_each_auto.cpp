//Range-based for
//for_each_auto.cpp
#include <iostream>
int main(){
    int a[]{ 1, 2, 3, 4, 5, 6 };
    for(auto& e: a) { std::cout << e << ' '; }
    std::cout << std::endl;
    return 0;
}