#pragma once

#include <string>
#include "ImplementationOverlapFalseTest.h"

class ImplementationOverlapTester
{
public:
	ImplementationOverlapTester();
	~ImplementationOverlapTester();

	std::string test();

private:
	std::string testFalse();
};
