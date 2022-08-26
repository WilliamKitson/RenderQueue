#pragma once

#include <string>
#include "Elements.h"

class ElementsDataEmptyTest
{
public:
	ElementsDataEmptyTest();
	~ElementsDataEmptyTest();

	std::string test();

private:
	int successes();

private:
	int resolution;
	renderQueue::Elements unit;
};
