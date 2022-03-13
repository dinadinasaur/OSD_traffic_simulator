
#ifndef UNTITLED52_ISIMOUTPUT_H
#define UNTITLED52_ISIMOUTPUT_H

#include "Vehicle.h"


class ISimOutput {
    public:
    virtual double GetSpeed(Vehicle* v)=0;

};


#endif
