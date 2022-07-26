#pragma once

#include <string>

#include "ObjectsTransformDefaultTest.h"
#include "ObjectsTransformPushTest.h"

class ObjectsTransformTester
{
public:
	ObjectsTransformTester();
	~ObjectsTransformTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
};
