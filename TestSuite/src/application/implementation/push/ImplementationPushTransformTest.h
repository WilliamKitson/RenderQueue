#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPushTransformTest
{
public:
	ImplementationPushTransformTest();
	~ImplementationPushTransformTest();

	std::string test();

private:
	void scenes();
	void objects();
	int successes();

private:
	renderQueue::Facade* unit;
	int itterations;
};
