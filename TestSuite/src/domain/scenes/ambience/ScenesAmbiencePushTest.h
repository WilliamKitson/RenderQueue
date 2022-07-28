#pragma once

#include <string>
#include "Scenes.h"

class ScenesAmbiencePushTest
{
public:
	ScenesAmbiencePushTest();
	~ScenesAmbiencePushTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);

private:
	renderQueue::Scenes unit;
	int itterations;
};
