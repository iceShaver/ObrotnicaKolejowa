//
// Created by kamil on 3/19/17.
//

#ifndef OBROTNICAKOLEJOWA_DRIVER_H
#define OBROTNICAKOLEJOWA_DRIVER_H


#include "Turntable.h"

class Driver {
public:
    Driver(Turntable*);
    void ControlHandle();
    void Report();
private:
    Turntable * turntable;
};


#endif //OBROTNICAKOLEJOWA_DRIVER_H
