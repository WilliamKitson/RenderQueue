#pragma once

#include <string>

#include "ScenesAmbienceDefaultTest.h"
#include "ScenesAmbiencePushTest.h"
#include "ScenesAmbienceEmptyTest.h"

class ScenesAmbienceTester
{
public:
	ScenesAmbienceTester();
	~ScenesAmbienceTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testEmpty();
};
