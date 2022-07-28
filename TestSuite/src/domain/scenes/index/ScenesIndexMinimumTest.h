#pragma once

#include <string>
#include "Scenes.h"

class ScenesIndexMinimumTest
{
public:
	ScenesIndexMinimumTest();
	~ScenesIndexMinimumTest();

	std::string test();

private:
	bool success();

private:
	renderQueue::Scenes unit;
};
