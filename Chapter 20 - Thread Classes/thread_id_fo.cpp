// Thread Class - Function Object
// thread_id_fo.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <thread>
#include <vector>

const int NT = 10;
class task {
public:
  void operator()(int i) {
    std::cout << i << " Thread id = " << std::this_thread::get_id() << std::endl;
  }
};
int main() {
  std::vector<std::thread> threads;
  for (int i = 0; i < NT; i++) {
    threads.push_back(std::thread(task(), i));
  }
  for (auto& thread : threads) {
    thread.join();
  }
}