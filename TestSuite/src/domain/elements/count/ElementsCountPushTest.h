#pragma once

#include <string>
#include "Elements.h"

class ElementsCountPushTest
{
public:
	ElementsCountPushTest();
	~ElementsCountPushTest();

	std::string test();

private:
	int successes();

private:
	renderQueue::Elements unit;
	int itterations;
};
