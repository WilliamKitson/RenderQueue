#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationRenderWithinTest
{
public:
	ImplementationRenderWithinTest();
	~ImplementationRenderWithinTest();

	std::string test();

private:
	renderQueue::Facade* unit;
};
