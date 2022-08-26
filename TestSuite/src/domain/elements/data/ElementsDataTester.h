#pragma once

#include <string>

#include "ElementsDataDefaultTest.h"
#include "ElementsDataPushTest.h"
#include "ElementsDataPopTest.h"
#include "ElementsDataEmptyTest.h"

class ElementsDataTester
{
public:
	ElementsDataTester();
	~ElementsDataTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testPop();
	std::string testEmpty();
};
