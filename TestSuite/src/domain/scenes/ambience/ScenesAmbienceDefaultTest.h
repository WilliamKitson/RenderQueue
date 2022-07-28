#pragma once

#include <string>
#include "Scenes.h"

class ScenesAmbienceDefaultTest
{
public:
	ScenesAmbienceDefaultTest();
	~ScenesAmbienceDefaultTest();

	std::string test();

private:
	bool success();

private:
	renderQueue::Scenes unit;
};
