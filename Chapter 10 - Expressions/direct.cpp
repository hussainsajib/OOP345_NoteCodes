// Direct Selection
// direct.cpp
#include <iostream>
typedef struct {
    int x;
    double y;
} S;

int main(){
    S s = {0, 0.0};
    s.x = 1;
    std::cout << "x = " << s.x << "; y = " << s.y << std::endl;
}