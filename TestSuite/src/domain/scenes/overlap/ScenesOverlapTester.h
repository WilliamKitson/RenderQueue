#pragma once

#include <string>

#include "ScenesOverlapDefaultTest.h"
#include "ScenesOverlapPushTest.h"
#include "ScenesOverlapEmptyTest.h"

class ScenesOverlapTester
{
public:
	ScenesOverlapTester();
	~ScenesOverlapTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testEmpty();
};
