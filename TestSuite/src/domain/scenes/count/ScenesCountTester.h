#pragma once

#include <string>

#include "ScenesCountDefaultTest.h"
#include "ScenesCountPushTest.h"
#include "ScenesCountPopTest.h"
#include "ScenesCountMinimumTest.h"

class ScenesCountTester
{
public:
	ScenesCountTester();
	~ScenesCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testPop();
	std::string testMinimum();
};
