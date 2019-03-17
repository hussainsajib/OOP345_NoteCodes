//Non-type Template Parameters
//array.h
template<typename T, int size>
class Array{
    T a[size];
    unsigned n;
    T dummy;
public:
    Array() : n{ 0u }, dummy{ 0 }{};
    T& operator[](unsigned i){
        return i < 50u ? a[i] : dummy;
    }
};