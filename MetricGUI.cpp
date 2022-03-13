#include "MetricGUI.h"

double MetricGUI::GetSpeed(Vehicle* v) {
    {
        return (v->GetCurrentSpeed() * Constants::MpsToKph);
    }
}
void MetricGUI:: SetSpeedLimit(Vehicle* v, double s) {
        return (v->SetDesiredSpeed(s/Constants::MpsToKph));

}