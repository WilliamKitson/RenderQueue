#pragma once

#include <string>

#include "BindingsCountDefaultTest.h"
#include "BindingsCountPushTest.h"
#include "BindingsCountPopTest.h"

class BindingsCountTester
{
public:
	BindingsCountTester();
	~BindingsCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testPop();
};
