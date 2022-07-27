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
	renderQueue::Objects unit;
	int itterations;
};
