#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPushAmbienceTest
{
public:
	ImplementationPushAmbienceTest();
	~ImplementationPushAmbienceTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(renderQueue::RGBA, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
