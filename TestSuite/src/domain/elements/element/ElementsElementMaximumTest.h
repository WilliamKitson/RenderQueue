#pragma once

#include <string>
#include "Elements.h"

class ElementsElementMaximumTest
{
public:
	ElementsElementMaximumTest();
	~ElementsElementMaximumTest();

	std::string test();

private:
	renderQueue::Elements unit;
	float data;
};
