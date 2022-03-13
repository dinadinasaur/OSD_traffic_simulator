
#ifndef UNTITLED52_ISIMINPUT_H
#define UNTITLED52_ISIMINPUT_H


#include "Vehicle.h"

class ISimInput {

public:
    virtual void SetSpeedLimit(Vehicle* v, double speed);

};


#endif