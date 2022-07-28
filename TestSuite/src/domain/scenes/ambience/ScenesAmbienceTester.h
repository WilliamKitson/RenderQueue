#pragma once

#include <string>
#include "ScenesAmbienceDefaultTest.h"

class ScenesAmbienceTester
{
public:
	ScenesAmbienceTester();
	~ScenesAmbienceTester();

	std::string test();

private:
	std::string testDefault();
};
