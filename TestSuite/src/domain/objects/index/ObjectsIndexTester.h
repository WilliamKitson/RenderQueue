#pragma once

#include <string>
#include "ObjectsIndexPopTest.h"

class ObjectsIndexTester
{
public:
	ObjectsIndexTester();
	~ObjectsIndexTester();

	std::string test();

private:
	std::string testPop();
};
