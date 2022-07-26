#pragma once

#include <string>

#include "ObjectsCountDefaultTest.h"
#include "ObjectsCountPushTest.h"
#include "ObjectsCountPopTest.h"

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
};
