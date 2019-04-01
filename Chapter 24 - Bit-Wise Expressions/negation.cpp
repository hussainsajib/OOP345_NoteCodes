// Bitwise Expressions - Negation
// negation.cpp
#include <iostream>
#include <iomanip>
using namespace std;
typedef unsigned char uc;
typedef signed char sc;
typedef unsigned short us;
typedef signed short ss;
typedef unsigned int ui;
typedef signed int si;

int main(){
    ui u = 27u;
    us s = (us)27u;
    uc c = (uc)27;

    si i = 27;
    ss t = (ss)27;
    sc d = (sc)27;
    
    cout << "u: " << u <<",~u: " << setw(10) << ~u << ",~~u: " << setw(3) << ~~u << endl;
    cout << "s: " << s <<",~s: " << setw(10) << (us)~s << ",~~s: " << setw(3) << ~~s << endl;
    cout << "c: " << (ui)c <<",~c: " << setw(10) << (ui)(uc)~c << ",~~c: " << setw(3) << ~~c << endl;

    cout << "i: " << i <<",~i: " << setw(10) << ~i << ",~~i: " << setw(3) << ~~i << endl;
    cout << "t: " << t <<",~t: " << setw(10) << ~t << ",~~t: " << setw(3) << ~~t << endl;
    cout << "d: " << (si)d <<",~d: " << setw(10) << ~d << ",~~d: " << setw(3) << ~~d << endl;
}