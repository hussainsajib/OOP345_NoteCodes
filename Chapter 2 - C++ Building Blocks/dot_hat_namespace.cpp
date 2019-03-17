//Namespace
//Used with dot.h, dot.cpp, hat.h, hat.cpp
#include "dot.h"
#include "hat.h"
int main(){
    char s[51];
    using dot::leader;
    leader(s);
    using hat::leader;
    hat::leader(s);
    return 0;
}