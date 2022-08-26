#pragma once

#include <string>

#include "ElementsCountDefaultTest.h"
#include "ElementsCountPushTest.h"
#include "ElementsCountPopTest.h"
#include "ElementsCountMinimumTest.h"

class ElementsCountTester
{
public:
	ElementsCountTester();
	~ElementsCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testPop();
	std::string testMinimum();
};
