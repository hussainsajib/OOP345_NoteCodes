//Algorithms - Copy
//copy_.cpp

#include <vector>
#include <algorithm>
#include <iostream>
int main(){
  std::vector<double> v(4,10.34);
  std::vector<double> c(4,20.68);
  std::copy(v.begin(), v.begin()+2, c.begin() + 1);
  for (auto i : c){
    std::cout << i << std::endl;
  }
  return 0;
}