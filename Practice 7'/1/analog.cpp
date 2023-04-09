#include "analog.h"

AnalogSensor::AnalogSensor(int threshold)
{
	this->threshold = threshold;
}

bool AnalogSensor::readValue(int input)
{
	return input >= threshold;
}
