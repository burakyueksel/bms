#ifndef BATTERYMODEL_H
#define BATTERYMODEL_H

class BatteryModel {
public:
    BatteryModel();
    void update(double current); // Update the battery state based on the current
    double getVoltage() const;
    double getStateOfCharge() const;
    double getStateOfHealth() const;

private:
    double voltage; // Simulated battery voltage
    double stateOfCharge; // Simulated state of charge (%)
    double stateOfHealth; // Simulated state of health (%)
};

#endif // BATTERYMODEL_H
