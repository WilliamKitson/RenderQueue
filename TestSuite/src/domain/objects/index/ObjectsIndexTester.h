#pragma once

#include <string>

#include "ObjectsIndexPopTest.h"
#include "ObjectsIndexMinimumTest.h"
#include "ObjectsIndexMaximumTest.h"

class ObjectsIndexTester
{
public:
	ObjectsIndexTester();
	~ObjectsIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
	std::string testMaximum();
};
