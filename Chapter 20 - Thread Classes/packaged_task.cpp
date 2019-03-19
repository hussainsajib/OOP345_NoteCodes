// Packaged Task
// packaged_task.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt

#include <iostream>
#include <thread>
#include <future>
double task(double x) { return x * 2; }
int main() {
  std::packaged_task<double(double)> pt(task);
  auto f = pt.get_future();
  pt(10);
  double r = f.get();
  std::cout << "Result = " << r << std::endl;
}