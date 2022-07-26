#pragma once

#include <string>
#include "ObjectsTransformDefaultTest.h"

class ObjectsTransformTester
{
public:
	ObjectsTransformTester();
	~ObjectsTransformTester();

	std::string test();

private:
	std::string testDefault();
};
