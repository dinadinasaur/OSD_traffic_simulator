
#ifndef UNTITLED52_IMPERIALGUI_H
#define UNTITLED52_IMPERIALGUI_H

#include "Vehicle.h"
#include "GUI.h"

class ImperialGUI : public GUI {

public:
    double GetSpeed(Vehicle* v)override;
    void SetSpeedLimit(Vehicle* v, double s)override;

};

#endif