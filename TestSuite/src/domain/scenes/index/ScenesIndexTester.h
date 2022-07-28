#pragma once

#include <string>
#include "ScenesIndexPopTest.h"

class ScenesIndexTester
{
public:
	ScenesIndexTester();
	~ScenesIndexTester();

	std::string test();

private:
	std::string testPop();
};
