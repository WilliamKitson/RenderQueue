#pragma once

#include <string>
#include "DistanceDefaultTest.h"

class DistanceTester
{
public:
	DistanceTester();
	~DistanceTester();

	std::string test();

private:
	std::string testDefault();
};
