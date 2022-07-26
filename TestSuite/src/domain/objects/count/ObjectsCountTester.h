#pragma once

#include <string>

#include "ObjectsCountDefaultTest.h"
#include "ObjectsCountPushTest.h"
#include "ObjectsCountPopTest.h"
#include "ObjectsCountMinimumTest.h"

class ObjectsCountTester
{
public:
	ObjectsCountTester();
	~ObjectsCountTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testPop();
	std::string testMinimum();
};
