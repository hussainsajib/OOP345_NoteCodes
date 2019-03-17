//Association
//Course.h
#include "Name.h"
class Room;
class Course{
    Name name;
    int code;
    Room* room = nullptr;
public:
    Course(const char*, int);
    void book(Room&);
    void unbook();
    const char* get() const;
    void display() const;
};