// Assignment Expressions
// copyArray.cpp
#include <iostream>
typedef struct {
    int a[20];
} Array;
int main(){
    Array original = {1, 2, 3, 4, 5}, copy;
    copy = original;
    for(int i = 0; i < 5; i++){
        std::cout << copy.a[i] << ' ';
    }
    std::cout << std::endl;
}