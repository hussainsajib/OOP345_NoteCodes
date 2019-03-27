#ifndef EMITTER_H
#define EMITTER_H
// Multiple Inheritance - Emitter
// Emitter.h
typedef unsigned long int ulong;

class Emitter{
public:
    virtual ulong emission() const = 0;
};

#endif