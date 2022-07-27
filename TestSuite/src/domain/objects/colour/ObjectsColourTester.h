#pragma once

#include <string>

#include "ObjectsColourDefaultTest.h"
#include "ObjectsColourPushTest.h"
#include "ObjectsColourEmptyTest.h"
#include "ObjectsColourPopTest.h"

class ObjectsColourTester
{
public:
	ObjectsColourTester();
	~ObjectsColourTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testEmpty();
	std::string testPop();
};
