#pragma once

#include <string>
#include "Objects.h"

class ObjectsColourEmptyTest
{
public:
	ObjectsColourEmptyTest();
	~ObjectsColourEmptyTest();

	std::string test();

private:
	bool success();

private:
	RenderQueue::Objects unit;
};
