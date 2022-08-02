#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationRenderOutsideTest
{
public:
	ImplementationRenderOutsideTest();
	~ImplementationRenderOutsideTest();

	std::string test();

private:
	renderQueue::Facade* unit;
};
