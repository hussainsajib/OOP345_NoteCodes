//Scoped Enumeration
//s_enum.cpp
#include <iostream>
enum class Colour { white, red, green, blue };
std::ostream& operator<<(std::ostream& os, const Colour& color){
    std::string str;
    switch (color){
        case Colour::white:
            str = "white";
            break;
        case Colour::red:
            str = "red";
            break;
        case Colour::green:
            str = "green";
            break;
        case Colour::blue:
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
    wall = Colour::red;
    ceiling = Colour::white;
    door = Colour::green;
    std::cout << wall << ' ' << ceiling << ' ' << door << std::endl;
    return 0;
}