//Default Template Parameter Values
//array.h
template<typename T = int, int size = 50>
class Array{
    T a[size];
    unsigned n;
    T dummy;
public:
    Array() : n{ 0 }, dummy{ 0 }{}
    T& operator[](unsigned i) { return i < 50u ? a[i] : dummy; }
};