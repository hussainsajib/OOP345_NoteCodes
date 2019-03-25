// Ragged Array
// raggedArray.cpp
#include <iostream>
#include <iomanip>
int main(){
    char* name[] ={"Marg","Jeremy","Christopher","Homer"};
    for(int i = 0; i < 4; i++){
        std::cout << std::setw(7) << &name[i]
        << std::setw(7) << std::hex <<
        (int)&name[i][0] << std::dec
        << ' ' << name[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}