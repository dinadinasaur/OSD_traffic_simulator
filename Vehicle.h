#ifndef UNTITLED52_VEHICLE_H
#define UNTITLED52_VEHICLE_H

#include "Constants.h"
#include "Dynamicroaditem.h"

class Vehicle: public Dynamicroaditem {

protected:
    double currentSpeed;
    int currentDirection;
    int currentLocation;
    int desiredSpeed;

public:
    Vehicle();
    ~Vehicle();
    double GetCurrentSpeed();
    void SetDesiredSpeed(double speed);
    void SetCurrentSpeed(double speed);
    void UpdateSpeed(int seconds);
    virtual void Accelerate(int secondsDelta);
    virtual void Decelerate(int secondsDelta);
    void Turn(int direction, int degrees);
};



#endif


