#pragma once

#include <string>

#include "ObjectsColourDefaultTest.h"
#include "ObjectsColourPushTest.h"

class ObjectsColourTester
{
public:
	ObjectsColourTester();
	~ObjectsColourTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
};
