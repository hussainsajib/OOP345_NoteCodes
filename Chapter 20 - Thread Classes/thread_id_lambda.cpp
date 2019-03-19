// Thread Class - Lambda Expression
// thread_id_lambda.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <vector>
#include <thread>
const int NT = 10;
int main() {
  std::vector<std::thread> threads;
  for (int i = 0; i < NT; i++) {
    threads.push_back(std::thread([=]() {
      std::cout << i << " Thread id = " << std::this_thread::get_id() << std::endl;
    }));
  }
  for (auto& thread : threads) {
    thread.join();
  }
}