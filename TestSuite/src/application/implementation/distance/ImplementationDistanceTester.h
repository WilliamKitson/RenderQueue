#pragma once

#include <string>

#include "ImplementationDistanceRenderedTest.h"
#include "ImplementationDistanceUnrenderedTest.h"

class ImplementationDistanceTester
{
public:
	ImplementationDistanceTester();
	~ImplementationDistanceTester();

	std::string test();

private:
	std::string testRendered();
	std::string testUnrendered();
};
