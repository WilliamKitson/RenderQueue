#pragma once

#include <string>
#include "Elements.h"

class ElementsDataDefaultTest
{
public:
	ElementsDataDefaultTest();
	~ElementsDataDefaultTest();

	std::string test();

private:
	void initialise();
	int iSuccesses();
	int eSuccesses();

private:
	int resolution;
	renderQueue::Elements unit;
};
