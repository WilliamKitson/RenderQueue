#pragma once

#include <string>
#include "Scenes.h"

class ScenesOverlapPopTest
{
public:
	ScenesOverlapPopTest();
	~ScenesOverlapPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Scenes unit;
	int itterations;
};
