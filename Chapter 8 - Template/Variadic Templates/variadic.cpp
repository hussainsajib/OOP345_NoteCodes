//Variadic Templates
//variadic.cpp
#include <iostream>
template<typename T>
void print(const T& t){ std::cout << t << std::endl; }

template<typename T, typename... etc>
void print(const T& t, const etc&... pp){
    std::cout << t << " | ";
    print(pp...);
}

int main(){
    print(100);
    print("abcd",100,34.56);
    return 0;
}