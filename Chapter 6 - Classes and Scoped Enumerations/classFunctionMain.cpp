//Class Functions - Application
//classFunctionMain.cpp
#include <iostream>
#include "classFunction.h"
int main(){
    std::cout << Horse::howMany() << " horses" << std::endl;
    {
        Horse silver(3), northernDancer(4);
        silver.display();
        northernDancer.display();
        std::cout << Horse::howMany() << " horses" << std::endl;
        std::cout << silver.howMany() << " horses" << std::endl;
        std::cout << northernDancer.howMany() << " horses" << std::endl;
    }
    std::cout << Horse::howMany() << " horses" << std::endl;
}