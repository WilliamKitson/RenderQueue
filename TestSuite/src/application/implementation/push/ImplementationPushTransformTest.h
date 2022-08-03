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
	void objects(float);
	int sSuccesses();
	int oSuccesses(float);
	bool success(renderQueue::Transform, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
