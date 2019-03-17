//Class Functions - Header
//classFunction.h
class Horse{
    unsigned age;
    unsigned no;
    static unsigned noHorses;
public:
    Horse(unsigned a);
    ~Horse();
    void display() const;
    static unsigned howMany();
};