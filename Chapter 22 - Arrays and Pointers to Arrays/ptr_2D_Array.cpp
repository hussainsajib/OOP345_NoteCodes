// Pointer to a 2D Array
// ptr_2D_Array.cpp
#include <iostream>
#include <iomanip>
const int c = 5;
int main(){
    int r, i, j;
    int (*a)[c];
    std::cout << "Number of rows: ";
    std::cin >> r;
    a = new int[r][c];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            a[i][j] = (i + 1) * (j + 1);
        }
    }
    std::cout << "   ";
    for(j = 0; j < c; j++){
        std::cout << std::setw(4) << j + 1;
    }
    std::cout << std::endl;
    for(i = 0; i < r; i++){
        std::cout << std::setw(3) << i + 1;
        for(j = 0; j < c; j++){
            std::cout << std::setw(4) << a[i][j];
        }
        std::cout << std::endl;
    }
    delete[]a;
    return 0;
}