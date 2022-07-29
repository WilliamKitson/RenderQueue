#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPushCameraTest
{
public:
	ImplementationPushCameraTest();
	~ImplementationPushCameraTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Facade* unit;
	int itterations;
};
