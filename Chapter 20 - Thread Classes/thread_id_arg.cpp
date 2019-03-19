// Thread Class - Function with Arguments
// thread_id_arg.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <vector>
#include <thread>
const int NT = 10;
void task(int i) {
  std::cout << i << " Thread id = " << std::this_thread::get_id() << std::endl;
}
int main() {
  //create a vector of non-joinable threads
  std::vector<std::thread> threads;
  //launch execution of each thread
  for (int i = 0; i < NT; i++) {
    threads.push_back(std::thread(task, i));
  }
  for (auto& thread : threads) {
    thread.join();
  }
}