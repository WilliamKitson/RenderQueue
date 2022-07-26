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

private:
	RenderQueue::Objects unit;
};
