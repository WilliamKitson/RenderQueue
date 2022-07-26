#pragma once

#include <string>
#include "count/ObjectsCountTester.h"

class ObjectsTester
{
public:
	ObjectsTester();
	~ObjectsTester();

	std::string test();

private:
	std::string testCount();
};
