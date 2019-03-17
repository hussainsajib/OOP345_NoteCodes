//decltype with templates
//decltype.cpp
#include <iostream>
#include <typeinfo>

template<typename T, typename U>
auto add(const T& t, const U& u) ->decltype(t + u) { return t + u; }

int main(){
    int i = 3, j = 6;
    double x = 4.5;
    char c = 'A';
    std::cout << "adding type " << typeid(i).name() << " and " << typeid(j).name() << ": " << add(i, j) << std::endl;
    std::cout << "adding type " << typeid(i).name() << " and " << typeid(x).name() << ": " << add(i, x) << std::endl;
    std::cout << "adding type " << typeid(i).name() << " and " << typeid(c).name() << ": " << add(i, c) << std::endl;
    
    return 0;
}