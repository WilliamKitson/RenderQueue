#pragma once

#include <string>
#include "Distance.h"

class DistanceCameraTest
{
public:
	DistanceCameraTest();
	~DistanceCameraTest();

	std::string test();

private:
	float calculate(float[3]);

private:
	int itterations;
	int successes;
};
