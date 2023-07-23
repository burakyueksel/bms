#include "BatteryManagementSystem.h"
#include <iostream>

BatteryManagementSystem::BatteryManagementSystem() : battery() {}

void BatteryManagementSystem::runBatterySimulation(int numTimeSteps) {
    for (int t = 0; t < numTimeSteps; ++t) {
        double current = 10.0; // Simulated battery current for the time step (adjust as needed)
        battery.update(current);
        double voltage = battery.getVoltage();
        double soc = battery.getStateOfCharge();
        double soh = battery.getStateOfHealth();

        std::cout << "Time step: " << t << std::endl;
        std::cout << "Voltage: " << voltage << " V" << std::endl;
        std::cout << "State of Charge: " << soc << " %" << std::endl;
        std::cout << "State of Health: " << soh << " %" << std::endl;
        std::cout << std::endl;
    }
}
