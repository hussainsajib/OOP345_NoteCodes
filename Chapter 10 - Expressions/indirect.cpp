// Indirect Selection
// indirect.cpp
#include <iostream>
typedef struct{
    int x;
    double y;
} S;

S* add2 (S* s){
    s->x += 2;
    s->y += 2;
    return s;
}
int main(){
    S s = {0, 0.0};
    add2(&s)->x++;
    std::cout << "x = " << s.x << "; y = " << s.y << std::endl;
}