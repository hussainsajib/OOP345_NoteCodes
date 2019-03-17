//Function Pointers Array
//array_function_pointers.cpp

#include <iostream>

//ascending order comparison
template <typename T>
bool ascending(T a, T b) {return a > b; }

//descending order comparison
template <typename T>
bool descending(T a, T b) { return a < b; }

template <typename T>
void sort(T* a, int n, bool (*comparison) (T, T)){
    for(unsigned i = n-1; i > 0; i--){
        for(unsigned j = 0; j < i; j++){
            if(comparison(a[j],a[j+1])){
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
    int a [] = { 1, 5, 2, 3, 6, 7, 2 };
    bool (*criteriion[2]) (int, int) = { ascending, descending };
    int n = sizeof a / sizeof(int);
    for (unsigned i = 0; i < 2; i++){
        sort(a, n, criteriion[i]);
        display(a, n);
    }
}