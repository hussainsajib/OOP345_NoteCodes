//Hexadecimal Representation at an Address
//hexDump.cpp
#include <iostream>
#include <iomanip>
using namespace std;
void hexDump(void*, int);

int main(){
    int i;
    double x;
    cout << "Integer value : ";
    cin >> i;
    cout << "is : ";
    hexDump(&i, 4);
    cout << endl;

    cout << "Floating-point value : ";
    cin >> x;
    cout << "is : ";
    hexDump(&x, 8);
    cout << endl;
    return 0;
}

//Dump the first n bytes to the address a
void hexDump(void* a, int n){
    unsigned char* c = static_cast<unsigned char*>(a);
    cout.fill('0');
    cout << hex;
    for(int i = 0; i < n; i++){
        cout << setw(2) << (int)c[i] << ' ';
    }
    cout.fill(' ');
    cout << dec;
}