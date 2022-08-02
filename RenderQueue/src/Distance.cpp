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
	distance = root(unrooted());
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

float renderQueue::Distance::root(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float renderQueue::Distance::unrooted()
{
	return square(element(0)) + square(element(1)) + square(element(2));
}

float renderQueue::Distance::square(float input)
{
	return input * input;
}

float renderQueue::Distance::element(int input)
{
	return data[input] - data[3 + input];
}
