#pragma once

#include <string>
#include "Elements.h"

class ElementsCountPopTest
{
public:
	ElementsCountPopTest();
	~ElementsCountPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Elements unit;
	int itterations;
};
