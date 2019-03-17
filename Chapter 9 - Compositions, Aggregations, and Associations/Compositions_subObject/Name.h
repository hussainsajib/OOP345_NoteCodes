//Composition - Name
//Name.h
#ifndef NAME_H
#define NAME_H
class Name{
    char* name = nullptr;
public:
    Name(const char*);
    Name(const Name&);
    Name& operator=(const Name&);
    ~Name();
    const char* get() const;
    void set(const char*);
};

#endif