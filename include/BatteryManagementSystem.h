#ifndef BATTERYMANAGEMENTSYSTEM_H
#define BATTERYMANAGEMENTSYSTEM_H

#include "BatteryModel.h"

class BatteryManagementSystem {
public:
    BatteryManagementSystem();
    void runBatterySimulation(int numTimeSteps);

private:
    BatteryModel battery;
};

#endif // BATTERYMANAGEMENTSYSTEM_H
