#pragma once

#include <string>

#include "ImplementationOverlapFalseTest.h"
#include "ImplementationOverlapTrueTest.h"

class ImplementationOverlapTester
{
public:
	ImplementationOverlapTester();
	~ImplementationOverlapTester();

	std::string test();

private:
	std::string testFalse();
	std::string testTrue();
};
