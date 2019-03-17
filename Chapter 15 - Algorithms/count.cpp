// Algorithms - Count
//count.cpp

#include <array>
#include <algorithm>
#include <iostream>
int main(){
  std::array<int, 11> a = {1,12,4,5,8,9,12,13,16,18,12};
  //int count(InputIterator f, InputIterator l, const T& t)
  int n = std::count(a.begin(),a.end(),12);
  std::cout << "12 occurs " << n << " times." << std::endl;
  return 0;
}