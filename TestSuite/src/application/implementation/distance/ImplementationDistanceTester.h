#pragma once

#include <string>
#include "ImplementationDistanceRenderedTest.h"

class ImplementationDistanceTester
{
public:
	ImplementationDistanceTester();
	~ImplementationDistanceTester();

	std::string test();

private:
	std::string testRendered();
};
