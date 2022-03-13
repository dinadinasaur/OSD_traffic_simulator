#include "Truck.h"
#include "Constants.h"

Truck::Truck(int weight){
    loadWeight= weight;
}
Truck::~Truck() {

}
void Truck::setLoadWeight(int weight) {

}

void Truck::Accelerate(int secondsDelta) {
    if (loadWeight <= 5)
        SetCurrentSpeed(GetCurrentSpeed() + Constants::AccRateEmpty * secondsDelta);
    else
        SetCurrentSpeed(GetCurrentSpeed() + Constants::AccRateFull * secondsDelta);
    }


void Truck::Decelerate(int secondsDelta) {
    if (loadWeight <= 5)
        SetCurrentSpeed(GetCurrentSpeed() - Constants::DecRateEmpty * secondsDelta);
    else
        SetCurrentSpeed(GetCurrentSpeed() - Constants::DecRateFull * secondsDelta);
    }

