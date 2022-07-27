#pragma once

#include <string>
#include "Objects.h"

class ObjectsIndexMinimumTest
{
public:
	ObjectsIndexMinimumTest();
	~ObjectsIndexMinimumTest();

	std::string test();

private:
	bool success();

private:
	RenderQueue::Objects unit;
};
