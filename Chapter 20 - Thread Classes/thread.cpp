// Thread Class
// thread.cpp
// This thread file did not compiled on MinGW compiler
// but did compile on VS17

// Workaround: read MUSTREAD_for_MinGW_compiler.txt
#include <iostream>
#include <thread>
void task(){
    std::cout << "task says Hi" << std::endl;
}
int main(){
    //spawn a child thread
    std::thread t1(task);
    //spawn another child thread
    std::thread t2(task);
    //continue executing the main thread
    std::cout << "main says Hi" << std::endl;
    //synchronize
    t2.join();
    t1.join();
    return 0;
}