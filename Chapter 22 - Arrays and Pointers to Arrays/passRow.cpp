// Two-Dimensional Array
// passRow.cpp
#include <iostream>
#define NCOLS 3
void foo(int a[], int c);
int main(){
    int a[2][NCOLS] = {{11, 12, 13}, {21, 22, 23}};
    foo(a[0], NCOLS);
    foo(a[1], NCOLS);
}

void foo(int a[], int c){
    for(int i = 0; i < c; i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}