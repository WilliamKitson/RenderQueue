#pragma once

#include <string>

#include "ObjectsTransformDefaultTest.h"
#include "ObjectsTransformPushTest.h"
#include "ObjectsTransformEmptyTest.h"

class ObjectsTransformTester
{
public:
	ObjectsTransformTester();
	~ObjectsTransformTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testEmpty();
};
