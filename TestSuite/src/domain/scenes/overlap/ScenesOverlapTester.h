#pragma once

#include <string>
#include "ScenesOverlapDefaultTest.h"

class ScenesOverlapTester
{
public:
	ScenesOverlapTester();
	~ScenesOverlapTester();

	std::string test();

private:
	std::string testDefault();
};
