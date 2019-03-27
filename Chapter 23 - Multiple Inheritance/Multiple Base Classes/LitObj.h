// Multiple Inheritance - LitObj
// LitObj.h
#include "Emitter.h"

class LitObj : public Emitter {
    unsigned long int color;
public:
    LitObj(unsigned long int c);
    unsigned long int emission() const;
};