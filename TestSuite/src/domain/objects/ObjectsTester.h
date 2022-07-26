#pragma once

#include <string>

#include "count/ObjectsCountTester.h"
#include "transform/ObjectsTransformTester.h"

class ObjectsTester
{
public:
	ObjectsTester();
	~ObjectsTester();

	std::string test();

private:
	std::string testCount();
	std::string testTransform();
};
