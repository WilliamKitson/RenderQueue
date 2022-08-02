#pragma once

#include <string>

#include "DistanceDefaultTest.h"
#include "DistanceCameraTest.h"

class DistanceTester
{
public:
	DistanceTester();
	~DistanceTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCamera();
};
