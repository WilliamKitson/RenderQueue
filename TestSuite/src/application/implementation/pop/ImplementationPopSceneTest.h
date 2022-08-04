#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPopSceneTest
{
public:
	ImplementationPopSceneTest();
	~ImplementationPopSceneTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(renderQueue::Camera, float);

private:
	renderQueue::Facade* unit;
	int itterations;
};
