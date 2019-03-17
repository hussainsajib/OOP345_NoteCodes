// Smart Pointer for Title
// SPtrToTitle.h
#include "Title.h"

class SPtrToTitle{
    Title* p { nullptr };
public:
    explicit SPtrToTitle(Title* p_ = nullptr) : p(p_){}
    SPtrToTitle(const SPtrToTitle&) = delete;
    SPtrToTitle& operator=(const SPtrToTitle& s) = delete;
    SPtrToTitle(SPtrToTitle&& s) { p = s.p; s.p = nullptr; }
    SPtrToTitle&& operator=(SPtrToTitle&& s){
        if(this != &s){
            delete p;
            p = s.p;
            s.p = nullptr;
        }
        return std::move(*this);
    }
    ~SPtrToTitle(){ delete p; }
    Title& operator*(){ return *p; }
    Title& operator->() { return p; }
};


