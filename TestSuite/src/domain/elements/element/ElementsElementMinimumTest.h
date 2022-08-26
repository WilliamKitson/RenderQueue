#pragma once

#include <string>
#include "Elements.h"

class ElementsElementMinimumTest
{
public:
	ElementsElementMinimumTest();
	~ElementsElementMinimumTest();

	std::string test();

private:
	renderQueue::Elements unit;
	float data;
};
