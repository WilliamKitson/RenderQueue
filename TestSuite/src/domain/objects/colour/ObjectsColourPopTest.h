#pragma once

#include <string>
#include "Objects.h"

class ObjectsColourPopTest
{
public:
	ObjectsColourPopTest();
	~ObjectsColourPopTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);

private:
	RenderQueue::Objects unit;
	int itterations;
};
