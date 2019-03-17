//Interfacing with the Host Platform
//my_prg.cpp
#include <iostream>
int main(int argc, char* argv[]){
    int i; 
    std::cout << "Course : " << argv[0] << std::endl;
    for(int i = 0; i < argc; i++){
        std::cout << "- " << argv[i] << std::endl;
    }
    return 0;
}