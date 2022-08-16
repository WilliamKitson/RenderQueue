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
	bool success(float);

private:
	renderQueue::Objects unit;
	int itterations;
};
