// Substrings
// substrings.cpp
#include <iostream>
int main(){
    char s[] = "A C string";
    for(int i = 0; s[i]; i++){
        std::cout << &s[i] << " : " << s[i] << std::endl;
    }
    return 0;
}