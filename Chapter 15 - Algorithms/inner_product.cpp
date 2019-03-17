//Algorithms - Inner Product
//inner_product.cpp
#include <iostream>
#include <numeric>
#include <functional>

int main(){
  int a[] {3, 2, 4, 1}, b [] {1, 2, 3, 4}, s;
  s = std::inner_product(a, &a[4], b, (int)0);
  std::cout << "dot product = " << s << std::endl;
  s = std::inner_product(a, &a[4], b, (int)0, std::plus<int>(),[](int x, int y){ return (x-y) * (x-y); });
  std::cout << "sum of "
  "(a[i]-b[i] ^2 = " << s << std::endl;
  return 0;
}