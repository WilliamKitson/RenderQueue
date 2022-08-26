#pragma once

#include <string>
#include "Elements.h"

class ElementsDataPopTest
{
public:
	ElementsDataPopTest();
	~ElementsDataPopTest();

	std::string test();

private:
	void push();
	void initialise(int);
	int iSuccesses();
	int eSuccesses(int);

private:
	int resolution;
	renderQueue::Elements unit;
};
