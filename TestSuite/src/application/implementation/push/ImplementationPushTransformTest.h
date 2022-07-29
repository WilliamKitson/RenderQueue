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
	renderQueue::Facade* unit;
};
