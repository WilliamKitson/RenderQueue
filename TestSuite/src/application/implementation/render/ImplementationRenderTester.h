#pragma once

#include <string>

#include "ImplementationRenderWithinTest.h"
#include "ImplementationRenderOutsideTest.h"

class ImplementationRenderTester
{
public:
	ImplementationRenderTester();
	~ImplementationRenderTester();

	std::string test();

private:
	std::string testWithin();
	std::string testOutside();
};
