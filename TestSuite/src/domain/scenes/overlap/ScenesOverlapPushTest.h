#pragma once

#include <string>
#include "Scenes.h"

class ScenesOverlapPushTest
{
public:
	ScenesOverlapPushTest();
	~ScenesOverlapPushTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Scenes unit;
	int itterations;
};
