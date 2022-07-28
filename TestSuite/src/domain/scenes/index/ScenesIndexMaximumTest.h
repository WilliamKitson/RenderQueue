#pragma once

#include <string>
#include "Scenes.h"

class ScenesIndexMaximumTest
{
public:
	ScenesIndexMaximumTest();
	~ScenesIndexMaximumTest();

	std::string test();

private:
	bool success();

private:
	renderQueue::Scenes unit;
};
