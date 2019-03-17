// Element Addresses
// addresses.cpp
#include <iostream>
int main(){
    char s[] = "A C string";
    std::cout << std::hex;
    for(int i = 0; s[i]; i++){
        std::cout << (int)&s[i] << " : " << s[i] << std::endl;
    }
    return 0;
}