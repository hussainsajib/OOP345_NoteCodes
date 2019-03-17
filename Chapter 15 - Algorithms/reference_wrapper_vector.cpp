// Functional - reference wrapper
// reference_wrapper_vector.cpp
#include <iostream>
#include <vector>
#include <functional>
int main(){
    //creating vector of 5 double numbers with 10.3 value
    std::vector<double> v (5, 10.3);
    //creating vector of reference_wrapper<double> type with 
    std::vector<std::reference_wrapper<double>> r (v.begin(),v.end());
    for(auto& i : v){ i *=3; }
    for(auto i : r) { std::cout << i << ' '; }
    std::cout << std::endl;
    return 0;
}