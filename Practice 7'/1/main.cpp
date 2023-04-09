#include "analog.h"

int readAnalogInput() {
    // реализация для считывания аналогового входного значения с датчика
    // возвращает входное значение в виде целого числа
}

int main() {
    AnalogSensor motionSensor(500); 

    int inputValue = readAnalogInput(); 

    bool motionDetected = motionSensor.readValue(inputValue); 

    if (motionDetected) {
        std::cout << "Motion detected"
    }
    else {
        std::cout << "No Motion"
    }
}