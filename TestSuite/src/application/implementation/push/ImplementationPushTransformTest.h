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
	int sSuccesses();
	int oSuccesses();
	bool success(renderQueue::Transform, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
