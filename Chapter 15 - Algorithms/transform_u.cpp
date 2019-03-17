//Algorithms - Transform - Unary Operation
//transform_u.cpp
#include <vector>
#include <algorithm>
#include <iostream>
int main(){
  std::vector<int> v = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43};
  std::vector<int> c(11);
  std::transform(v.begin(), v.end(), c.begin(), [](int i){ return 3* i; });
  for(auto i : c){
    std::cout << i << std::endl;
  }
  return 0;
}