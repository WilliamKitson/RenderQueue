#pragma once

#include <string>
#include "Elements.h"

class ElementsDataPushTest
{
public:
	ElementsDataPushTest();
	~ElementsDataPushTest();

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
