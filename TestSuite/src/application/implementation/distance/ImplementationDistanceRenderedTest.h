#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationDistanceRenderedTest
{
public:
	ImplementationDistanceRenderedTest();
	~ImplementationDistanceRenderedTest();

	std::string test();

private:
	renderQueue::Facade* unit;
};
