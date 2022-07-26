#pragma once

#include <string>
#include "ObjectsColourDefaultTest.h"

class ObjectsColourTester
{
public:
	ObjectsColourTester();
	~ObjectsColourTester();

	std::string test();

private:
	std::string testDefault();
};
