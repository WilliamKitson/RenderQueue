#pragma once

#include <string>
#include "Objects.h"

class ObjectsColourDefaultTest
{
public:
	ObjectsColourDefaultTest();
	~ObjectsColourDefaultTest();

	std::string test();

private:
	bool success();

private:
	RenderQueue::Objects unit;
};
