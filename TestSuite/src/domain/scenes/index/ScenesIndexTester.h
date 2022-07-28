#pragma once

#include <string>

#include "ScenesIndexPopTest.h"
#include "ScenesIndexMinimumTest.h"

class ScenesIndexTester
{
public:
	ScenesIndexTester();
	~ScenesIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
};
