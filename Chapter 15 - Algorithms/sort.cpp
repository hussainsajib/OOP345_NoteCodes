//Algorithm - Sort Descending Order
//sort.cpp
#include <iostream>
#include <algorithm>
int main(){
  int a[] {3, 2, 4, 1};
  std::sort(a, &a[4], [](int i, int j){ return i > j; });
  for(auto i : a) { std::cout << i << std::endl; }
  return 0;
}