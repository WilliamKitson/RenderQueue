#pragma once

#include <string>
#include "Objects.h"

class ObjectsCountPopTest
{
public:
	ObjectsCountPopTest();
	~ObjectsCountPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	RenderQueue::Objects unit;
	int itterations;
};
