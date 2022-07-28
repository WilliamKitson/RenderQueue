#pragma once

#include <string>
#include "ScenesCountDefaultTest.h"

class ScenesCountTester
{
public:
	ScenesCountTester();
	~ScenesCountTester();

	std::string test();

private:
	std::string testDefault();
};
