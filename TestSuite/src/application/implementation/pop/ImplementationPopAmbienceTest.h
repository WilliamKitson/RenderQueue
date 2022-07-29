#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPopAmbienceTest
{
public:
	ImplementationPopAmbienceTest();
	~ImplementationPopAmbienceTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(renderQueue::Colour, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
