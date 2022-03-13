

#ifndef UNTITLED52_GUI_H
#define UNTITLED52_GUI_H


#include "Vehicle.h"
#include "ISimInput.h"
#include "ISimOutput.h"

class GUI : public ISimInput, public ISimOutput {
public:

    virtual double GetSpeed(Vehicle* v) = 0;
    virtual void SetSpeedLimit(Vehicle* v, double speed) =0;
};


#endif