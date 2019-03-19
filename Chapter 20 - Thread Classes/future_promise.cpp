// Future - Promise
// future_promise.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt

// DID NOT COMPILE

#include <iostream>
#include <thread>
#include <future>
void task(std::future<double>& f) {
  double x = f.get();
  std::cout << "Value = " << x << std::endl;
}
int main() {
  std::promise<double> p;
  std::future<double> f = p.get_future();
  std::thread t(task, std::ref(p));
  p.set_value(12.34);
  t.join();
}