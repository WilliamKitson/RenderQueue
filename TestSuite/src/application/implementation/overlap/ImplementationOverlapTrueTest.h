#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationOverlapTrueTest
{
public:
	ImplementationOverlapTrueTest();
	~ImplementationOverlapTrueTest();

	std::string test();

private:
	int successes();

private:
	renderQueue::Facade* unit;
	int itterations;
};
