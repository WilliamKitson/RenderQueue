#pragma once

#include <string>
#include "Objects.h"

class ObjectsIndexMaximumTest
{
public:
	ObjectsIndexMaximumTest();
	~ObjectsIndexMaximumTest();

	std::string test();

private:
	bool success();

private:
	renderQueue::Objects unit;
};
