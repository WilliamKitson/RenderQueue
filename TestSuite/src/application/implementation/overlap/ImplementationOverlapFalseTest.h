#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationOverlapFalseTest
{
public:
	ImplementationOverlapFalseTest();
	~ImplementationOverlapFalseTest();

	std::string test();

private:
	int successes();

private:
	renderQueue::Facade* unit;
	int itterations;
};
