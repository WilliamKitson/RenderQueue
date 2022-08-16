#pragma once

#include <string>
#include "Objects.h"

class ObjectsTransformDefaultTest
{
public:
	ObjectsTransformDefaultTest();
	~ObjectsTransformDefaultTest();

	std::string test();

private:
	bool success();
	bool position();
	bool rotation();
	bool scale();

private:
	renderQueue::Objects unit;
};
