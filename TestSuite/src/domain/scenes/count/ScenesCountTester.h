#pragma once

#include <string>

#include "ScenesCountDefaultTest.h"
#include "ScenesCountPushTest.h"

class ScenesCountTester
{
public:
	ScenesCountTester();
	~ScenesCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
};
