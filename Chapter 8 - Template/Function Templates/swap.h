//Function Template
//swap.h
template<typename T>
void swap(T& a, T& b){
    T c; c = a; a = b; b = c;
}