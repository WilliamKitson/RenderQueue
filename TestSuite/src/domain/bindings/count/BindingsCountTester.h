#pragma once

#include <string>

#include "BindingsCountDefaultTest.h"
#include "BindingsCountPushTest.h"

class BindingsCountTester
{
public:
	BindingsCountTester();
	~BindingsCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
};
