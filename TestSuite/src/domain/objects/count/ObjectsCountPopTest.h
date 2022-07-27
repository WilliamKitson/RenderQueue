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
	renderQueue::Objects unit;
	int itterations;
};
