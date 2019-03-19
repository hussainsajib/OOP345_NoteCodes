// Thread Class
// thread_id.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
// Thread Class - Thread Identifiers
// therad_id.cpp
#include <iostream>
#include <thread>
#include <vector>

const int NT = 10;

void task() {
  std::cout << "Thread id = " << std::this_thread::get_id() << std::endl;
}

int main(){
  //create a vector of threads
  std::vector<std::thread> threads;
//launch execution of each thread
  for (int i = 0; i < NT; i++) {
    threads.push_back(std::thread(task));
  }
  // synchronize their execution here
  for (auto& thread: threads) {
    thread.join();
  }
}