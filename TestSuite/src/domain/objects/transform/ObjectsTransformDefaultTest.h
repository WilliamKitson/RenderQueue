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

private:
	renderQueue::Objects unit;
};
