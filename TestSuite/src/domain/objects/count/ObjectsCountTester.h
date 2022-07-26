#pragma once

#include <string>
#include "ObjectsCountDefaultTest.h"

class ObjectsCountTester
{
public:
	ObjectsCountTester();
	~ObjectsCountTester();

	std::string test();

private:
	std::string testDefault();
};
