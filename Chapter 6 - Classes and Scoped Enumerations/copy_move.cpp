//Copy and Move
//copy_move.cpp
#include <iostream>
#include <utility>

class Array{
    int* a = nullptr;
    unsigned n = 0u;
    int dummy = 0;
public:
    Array(){}
    Array(unsigned no) :a(new int[no]), n(no){}
    Array(const Array& src) { *this = src; }
    Array(Array&& src) { *this = std::move(src); }
    Array& operator=(const Array& src){
        if( this != &src){
            delete[]a;
            a = new int[src.n];
            for(unsigned i = 0u; i < src.n; i++){ a[i] = src.a[i]; }
            n = src.n;
        }
        return *this;
    }
    Array&& operator=(Array&& src){
        if(this != &src){
            delete[]a;
            a = src.a;
            n = src.n;
            dummy = src.dummy;
            src.a = nullptr;
            src.n = 0u;
            src.dummy = 0;
        }
        return std::move(*this);
    }
    ~Array(){ delete[]a; }
    int& operator[](unsigned i){
        return n > 0u && i < n ? a[i] : dummy;
    }
    int operator[](unsigned i) const {
        return n > 0u && i < n ? a[i] : dummy;
    }
    unsigned size() const { return n; }
};

int main(){
    const unsigned size = 5;
    Array a(size), b;
    for(unsigned i = 0u; i < a.size(); i++){
        a[i] = 3 * i;
    }
    std::cout << "Copy-Assignment" << std::endl;
    std::cout << "a : ";
    for(unsigned i = 0u; i < a.size(); i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    b = a;
    std::cout << "b : ";
    for(unsigned i = 0u; i < b.size(); i++){
        std::cout << b[i] << ' ';
    }
    std::cout << std::endl;
    std::cout << "a : ";
    for(unsigned i = 0u; i < a.size(); i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << "Move-Assignment" << std::endl;
    std::cout << "a : ";
    for(unsigned i = 0u; i < a.size(); i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    b = std::move(a);
    std::cout << "b : ";
    for(unsigned i = 0u; i < b.size(); i++){
        std::cout << b[i] << ' ';
    }
    std::cout << std::endl;
    std::cout << "a : ";
    for(unsigned i = 0u; i < a.size(); i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std:: endl;
    return 0;
}