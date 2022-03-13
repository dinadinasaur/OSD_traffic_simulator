
#ifndef UNTITLED52_TRUCK_H
#define UNTITLED52_TRUCK_H

#include "Vehicle.h"
#include "Constants.h"

class Truck: public Vehicle {
private:
    int loadWeight;
public:
    Truck(int weight);
    ~Truck();
    void setLoadWeight(int weight);
    void Accelerate(int secondsDelta) override;
    void Decelerate(int secondsDelta) override;
};

#endif
