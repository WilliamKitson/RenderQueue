#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPushColourTest
{
public:
	ImplementationPushColourTest();
	~ImplementationPushColourTest();

	std::string test();

private:
	void scenes();
	void objects(float);
	int sSuccesses();
	int oSuccesses(float);
	bool success(renderQueue::RGBA, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
