#pragma once

#include <string>
#include "Scenes.h"

class ScenesCountPushTest
{
public:
	ScenesCountPushTest();
	~ScenesCountPushTest();

	std::string test();

private:
	int successes();

private:
	renderQueue::Scenes unit;
	int itterations;
};
