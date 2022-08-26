#pragma once

#include <string>
#include "Elements.h"

class ElementsIndexMaximumTest
{
public:
	ElementsIndexMaximumTest();
	~ElementsIndexMaximumTest();

	std::string test();

private:
	renderQueue::Elements unit;
	float data;
};
