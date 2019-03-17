//Algorithms - Count If
//count_if.cpp
#include <algorithm>
#include <iostream>

int main(){
  int a[] = {1,2,4,5,8,9,12,13,16,18,22};
  int n = std::count_if(a, a+11, [](int i){ return !(i & 1); });
  std::cout << "Even Numbers = " << n << std::endl;
  return 0;
}