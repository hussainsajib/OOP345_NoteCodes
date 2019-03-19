// Thread Local Storage Duration
// thread_local.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <thread>

//thread_local int k = 0;     //LINUX
__declspec(thread) int k = 0; //WINDOWS VS2013
void show() {
  std::cout << k << " at " << &k << std::endl;
}

void task(int i) {
  k = i;
  show();
}

int main() {
  k = 10;
  std::thread t1(task, 15);
  std::thread t2(task, 20);
  t1.join();
  t2.join();
  show();
}