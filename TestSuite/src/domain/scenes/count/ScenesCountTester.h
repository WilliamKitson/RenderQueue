#pragma once

#include <string>

#include "ScenesCountDefaultTest.h"
#include "ScenesCountPushTest.h"
#include "ScenesCountPopTest.h"

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
};
