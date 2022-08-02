#pragma once

#include <string>
#include "Distance.h"

class DistanceObjectTest
{
public:
	DistanceObjectTest();
	~DistanceObjectTest();

	std::string test();

private:
	int successes();
	float calculate(float[3]);
	float root(float);
	float unrooted(float[3]);

private:
	int itterations;
};
