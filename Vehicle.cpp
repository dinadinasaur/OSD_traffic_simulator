#include "Constants.h"
#include "Vehicle.h"

Vehicle:: Vehicle() {
    currentSpeed=0.0;
}
Vehicle::~Vehicle() {

}

double Vehicle :: GetCurrentSpeed() {
    return currentSpeed;
}

void Vehicle :: SetDesiredSpeed(double speed) {
    desiredSpeed = speed;
}

void Vehicle :: SetCurrentSpeed(double speed) {
    {
        if(currentSpeed <= speed) // accelerating
        {
            if (speed > desiredSpeed)
                currentSpeed = desiredSpeed;
            else currentSpeed = speed;
        }
        else // braking
        {
            if (speed < desiredSpeed)
                currentSpeed = desiredSpeed;
            else currentSpeed = speed;
        }
    }
}

void Vehicle::UpdateSpeed(int seconds) {
    if (currentSpeed > desiredSpeed)
        Decelerate(seconds);
    else if (currentSpeed < desiredSpeed)
        Accelerate(seconds);
}

void Vehicle::Accelerate(int secondsDelta){
    SetCurrentSpeed(GetCurrentSpeed() + Constants::AccRate * secondsDelta);
}
void Vehicle::Decelerate(int secondsDelta){
    SetCurrentSpeed(GetCurrentSpeed() - Constants::DecRate * secondsDelta);


}
void Vehicle::Turn(int direction, int degrees) {

}


