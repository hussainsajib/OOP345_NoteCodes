// Two-Dimensional Arrays
// pass2DArray.cpp
#include <iostream>
#define NCOLS 3
void foo(int a[][NCOLS], int r, int c);
int main(){
    int a[2][NCOLS] = {{11, 12, 13}, {21, 22, 23}};
    foo(a, 2, 3);
}
void foo(int a[][NCOLS], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}