// Asynchronous Launch
// async.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <future>
#include <thread>
double task(double x) { return x * 2; }
int main() {
  std::future<double> f = std::async(task, 10);
  double r = f.get();
  std::cout << "Resutl = " << r << std::endl;
}