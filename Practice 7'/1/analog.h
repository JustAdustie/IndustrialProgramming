#ifndef ANALOG_SENSOR_H
#define ANALOG_SENSOR_H

class AnalogSensor {
private:
    int threshold;

public:
    AnalogSensor(int threshold);
    bool readValue(int input);
};

#endif