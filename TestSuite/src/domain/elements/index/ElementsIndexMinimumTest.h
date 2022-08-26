#pragma once

#include <string>
#include "Elements.h"

class ElementsIndexMinimumTest
{
public:
	ElementsIndexMinimumTest();
	~ElementsIndexMinimumTest();

	std::string test();

private:
	renderQueue::Elements unit;
	float data;
};
