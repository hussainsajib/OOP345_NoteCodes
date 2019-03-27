#ifndef NAME_H
#define NAME_H
// Replicated Base Classes
// Name.h
class Name{
    const char* name;
protected:
    Name(const char* n);
public:
    virtual void display() const;
};


#endif