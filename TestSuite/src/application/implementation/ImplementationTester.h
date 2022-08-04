#pragma once

#include <string>
#include "push/ImplementationPushTester.h"

class ImplementationTester
{
public:
	ImplementationTester();
	~ImplementationTester();

	std::string test();

private:
	std::string testPush();
};
