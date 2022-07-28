#pragma once

#include <string>
#include "Scenes.h"

class ScenesAmbienceEmptyTest
{
public:
	ScenesAmbienceEmptyTest();
	~ScenesAmbienceEmptyTest();

	std::string test();

private:
	bool success();

private:
	renderQueue::Scenes unit;
};
