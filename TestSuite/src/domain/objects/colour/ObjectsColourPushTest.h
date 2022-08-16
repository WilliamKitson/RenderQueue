#pragma once

#include <string>
#include "Objects.h"

class ObjectsColourPushTest
{
public:
	ObjectsColourPushTest();
	~ObjectsColourPushTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Objects unit;
	int itterations;
};
