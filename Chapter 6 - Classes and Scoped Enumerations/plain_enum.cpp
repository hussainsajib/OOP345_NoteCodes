//Plain Enumberations
//plain_enum.cpp
#include <iostream>
enum Colour { white, red, green, blue };
std::ostream& operator<<(std::ostream& os, const Colour& colour){
    std::string str;
    switch(colour){
        case white:
            str = "white";
            break;
        case red:
            str = "red";
            break;
        case green:
            str = "green";
            break;
        case blue:
            str = "blue";
            break;
        default:
            str = "none";
    }
    os << str.c_str();
    return os;
}

int main(){
    Colour wall, ceiling, door;
    wall = red;
    ceiling = white;
    door = green;
    std::cout << wall << ' ' << ceiling << ' ' << door << std::endl;
    return 0;
}