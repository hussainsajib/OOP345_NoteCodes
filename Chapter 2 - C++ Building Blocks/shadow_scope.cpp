//Shadowed Scope
//shadowed_scope.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int i;
    cout << "Enter i : ";
    cin >> i;
    if(i < 0){
        int i = 4;
        cout << i << endl;
    }
    else{
        int i = -4;
        cout << i << endl;
    }
    cout << i << endl;
    return 0;
}