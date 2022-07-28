#pragma once

#include <string>
#include "Scenes.h"

class ScenesAmbiencePopTest
{
public:
	ScenesAmbiencePopTest();
	~ScenesAmbiencePopTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);

private:
	renderQueue::Scenes unit;
	int itterations;
};
