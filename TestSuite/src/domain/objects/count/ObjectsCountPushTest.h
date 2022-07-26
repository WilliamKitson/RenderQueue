#pragma once

#include <string>
#include "Objects.h"

class ObjectsCountPushTest
{
public:
	ObjectsCountPushTest();
	~ObjectsCountPushTest();

	std::string test();

private:
	int successes();

private:
	RenderQueue::Objects unit;
	int itterations;
};
