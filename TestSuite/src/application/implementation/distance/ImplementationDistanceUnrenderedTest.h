#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationDistanceUnrenderedTest
{
public:
	ImplementationDistanceUnrenderedTest();
	~ImplementationDistanceUnrenderedTest();

	std::string test();

private:
	renderQueue::Facade* unit;
};
