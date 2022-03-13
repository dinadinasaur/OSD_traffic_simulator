

#ifndef UNTITLED52_METRICGUI_H
#define UNTITLED52_METRICGUI_H
#include "Vehicle.h"
#include "GUI.h"

class MetricGUI : public GUI {
public:
    double GetSpeed(Vehicle* v)override;
    void SetSpeedLimit(Vehicle* v, double s)override;
};

#endif