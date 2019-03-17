//Range-Based for
//for_each.cpp
#include <iostream>
int main(){
    int a[]{ 1, 2, 3, 4, 5, 6 };
    for(int& e: a){ std::cout << e << ' '; }
    std::cout << std::endl;
    return 0;
}