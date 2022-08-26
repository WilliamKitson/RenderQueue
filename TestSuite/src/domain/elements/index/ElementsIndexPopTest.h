#pragma once

#include <string>
#include "Elements.h"

class ElementsIndexPopTest
{
public:
	ElementsIndexPopTest();
	~ElementsIndexPopTest();

	std::string test();

private:
	void initialise();

private:
	renderQueue::Elements unit;
	int itterations;
};
