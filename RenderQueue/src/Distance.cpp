#include "Distance.h"

renderQueue::Distance::Distance()
	: distance{ 0.0f }, data()
{
	initialise();
}

renderQueue::Distance::~Distance()
{
}

void renderQueue::Distance::calculate()
{
	distance = square(unsquared());
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

void renderQueue::Distance::setObject(float input[3])
{
	for (int i{ 0 }; i < 3; i++)
	{
		data[3 + i] = input[i];
	}
}

void renderQueue::Distance::initialise()
{
	for (int i{ 0 }; i < 6; i++)
	{
		data[i] = 0.0f;
	}
}

float renderQueue::Distance::square(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float renderQueue::Distance::unsquared()
{
	float distanceX = data[0] - data[3];
	distanceX *= distanceX;

	float distanceY = data[1] - data[4];
	distanceY *= distanceY;

	float distanceZ = data[2] - data[5];
	distanceZ *= distanceZ;

	return distanceX + distanceY + distanceZ;
}
