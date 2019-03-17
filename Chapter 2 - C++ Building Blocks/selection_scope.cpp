//Selection Constructs - Block Scope
//selection_scope.cpp
//Include this to compile with c++17 standard: -std=c++17
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    unsigned i;
    cout << "Enter i : ";
    cin >> i;
    if(unsigned j = i % 10u; j <5u){
        i -=j ;
    } else {
        i += 10u - j;
    }
    cout << i << endl;
    cout << "Enter i : ";
    cin >> i;
    switch (unsigned j = i % 10u; j/5u){
        case 0u:
            i -= j;
            break;
        case 1u:
            i += 10u - j;
            break;
    }
    cout << i << endl;
    return 0;
}