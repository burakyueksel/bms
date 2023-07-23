#include "BatteryModel.h"
#include <algorithm> // Add this include for std::max function

BatteryModel::BatteryModel() : voltage(12.0), stateOfCharge(100.0), stateOfHealth(100.0) {}

void BatteryModel::update(double current) {
    // Simulated battery model update based on the current
    // Implement the actual battery model here (e.g., RC circuit, equivalent circuit model, etc.)
    // For simplicity, we assume a linear discharge for the demo
    const double batteryCapacity = 100.0; // Simulated battery capacity (adjust as needed)
    stateOfCharge -= (current * 100.0 / batteryCapacity); // Update SoC linearly (in a real BMS, this would be more sophisticated)

    // Perform additional battery model updates here, e.g., SoH calculations, temperature effects, etc.
    // ...

    // Clamp SoC and SoH to valid ranges (0% to 100%)
    stateOfCharge = std::max(0.0, std::min(stateOfCharge, 100.0));
    stateOfHealth = std::max(0.0, std::min(stateOfHealth, 100.0));
}

double BatteryModel::getVoltage() const {
    return voltage;
}

double BatteryModel::getStateOfCharge() const {
    return stateOfCharge;
}

double BatteryModel::getStateOfHealth() const {
    return stateOfHealth;
}
