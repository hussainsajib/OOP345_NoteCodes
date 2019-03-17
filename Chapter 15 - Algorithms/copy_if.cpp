//Algorithm - Copy If
//copy_if.cpp
#include <vector>
#include <algorithm>
#include <iostream>
int main(){
  std::vector<int> v {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43};
  std::vector<int> c(15);
  //OutputIterator copy_if(InputIterator f, InputIterator l, OutputIterator o, Fn predicate)
  std::copy_if(v.begin(), v.begin() + 10, c.begin(), [](int i) ->bool { return i % 2; });
  for (auto i : c) {
    if(i){ std::cout << i << std:: endl; };
  }
  return 0;

}