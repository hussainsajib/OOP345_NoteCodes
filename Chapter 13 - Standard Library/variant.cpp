// Variant - a type-safe union
// variant.cpp
#include <iostream>
#include <variant>

 int main() {
     std::variant<long, double> a, b;
     a = 12l; // a contains a long
     b = std::get<long>(a);
     std::cout << b << std::endl;

     try {
         double c = std::get<double>(b);
         std::cout << c << std::endl;
     }
     catch(std::bad_variant_access& bva) {
         std::cout << "bad type access" << std::endl; 
     }
 }