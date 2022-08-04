#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPushInvalidTest
{
public:
	ImplementationPushInvalidTest();
	~ImplementationPushInvalidTest();

	std::string test();

private:
	renderQueue::Facade* unit;
};
