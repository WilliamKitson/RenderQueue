#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPopCameraTest
{
public:
	ImplementationPopCameraTest();
	~ImplementationPopCameraTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(renderQueue::Camera, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
