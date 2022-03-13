#include "ImperialGUI.h"

double ImperialGUI::GetSpeed(Vehicle* v) {
    {
        return (v->GetCurrentSpeed() * Constants::MpsToMph);
    }
}
void ImperialGUI:: SetSpeedLimit(Vehicle* v, double s) {
    return (v->SetDesiredSpeed(s/Constants::MpsToMph));

}