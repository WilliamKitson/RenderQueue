#include "Distance.h"

renderQueue::Distance::Distance()
	: distance{ 0.0f }, data()
{
}

renderQueue::Distance::~Distance()
{
}

void renderQueue::Distance::calculate()
{
	float input = data[0] + data[1] + data[2];
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	distance = output;
}

float renderQueue::Distance::getDistance()
{
	return distance;
}

void renderQueue::Distance::setCamera(float input[3])
{
	for (int i{ 0 }; i < 3; i++)
	{
		data[i] = input[i];
	}
}
