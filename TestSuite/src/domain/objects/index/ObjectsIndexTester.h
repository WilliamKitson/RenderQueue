#pragma once

#include <string>

#include "ObjectsIndexPopTest.h"
#include "ObjectsIndexMinimumTest.h"

class ObjectsIndexTester
{
public:
	ObjectsIndexTester();
	~ObjectsIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
};
