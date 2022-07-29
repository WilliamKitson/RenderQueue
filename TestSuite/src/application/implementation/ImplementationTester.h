#pragma once

#include <string>

#include "push/ImplementationPushTester.h"
#include "pop/ImplementationPopTester.h"

class ImplementationTester
{
public:
	ImplementationTester();
	~ImplementationTester();

	std::string test();

private:
	std::string testPush();
	std::string testPop();
};
