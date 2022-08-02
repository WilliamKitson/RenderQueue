#pragma once

#include <string>
#include "ImplementationRenderWithinTest.h"

class ImplementationRenderTester
{
public:
	ImplementationRenderTester();
	~ImplementationRenderTester();

	std::string test();

private:
	std::string testWithin();
};
