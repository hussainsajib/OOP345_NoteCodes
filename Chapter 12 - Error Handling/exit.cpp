// Normal Exits
// exit.cpp
#include <iostream>
void exit_1(){
    std::cerr << "In exit_1\n";
}
int main(){
    int i;
    std::cout << "Return(!=1), Exit(1) ? ";
    std::cin >> i;
    if(i == 1){
        std::atexit(exit_1);
        std::exit(1);
    }
    return i;
}

/*
    Expected input and output:
    --------------------------
        Return(!=1), Exit(1) ? 1
        In exit_1

        Return(!=1), Exit(1) ? 2 
*/