// No Exceptions - compile on GCC
// noexceptions.cpp
#include <iostream>
void d(){ throw "d() throws\n"; }
void e(){
    try{
        d();
    }
    catch(const char* msg){
        std::cout << msg;
    }
}
void f() { 
    std::cout << "In f()" << std::endl;
    throw "f() throws\n";
}
void g() noexcept { e(); }
void h() noexcept { f(); }

int main(){
    std::cout << "Calling g(): ";
    g();
    std::cout << "Calling h(): ";
    h();
    std::cout << "Normal Exit\n";
}
