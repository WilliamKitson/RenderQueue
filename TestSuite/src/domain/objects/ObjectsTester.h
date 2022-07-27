#pragma once

#include <string>

#include "count/ObjectsCountTester.h"
#include "transform/ObjectsTransformTester.h"
#include "colour/ObjectsColourTester.h"
#include "index/ObjectsIndexTester.h"

class ObjectsTester
{
public:
	ObjectsTester();
	~ObjectsTester();

	std::string test();

private:
	std::string testCount();
	std::string testTransform();
	std::string testColour();
	std::string testIndex();
};
