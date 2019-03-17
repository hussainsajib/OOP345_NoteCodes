//Function Pointers
//function_pointers.cpp
#include <iostream>

//ascending order comparison
template <typename T>
bool ascending(T a, T b) { return a > b; }

//descending order comparison
template <typename T>
bool descending(T a, T b) { return a < b; }

//bubble sort
template <typename T>
void sort(T*a, int n, bool (*compare) (T,T)){
    for(unsigned i = n - 1; i > 0; i--){
        for(unsigned j = 0; j < i; j++){
            if(compare(a[j], a[j+1])){
                T temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

template <typename T>
void display(T* a, int n){
    for(unsigned i = 0; i < n; i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}

int main(){
    int a [] = {1, 5, 2, 3, 6, 7, 2};
    int n = sizeof a / sizeof(int);
    sort(a, n, ascending<int>);
    display<int>(a,n);

    sort(a,n,descending<int>);
    display<int>(a,n);

    return 0;
}