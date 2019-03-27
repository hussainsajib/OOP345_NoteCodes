// Multiple Inheritance - LitObj
// LitObj.h
#include "Emitter.h"

class LitObj : public Emitter {
    ulong color;
public:
    LitObj(ulong c);
    ulong emission() const;
};