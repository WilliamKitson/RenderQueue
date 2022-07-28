#pragma once

#include <string>
#include "Scenes.h"

class ScenesCountPopTest
{
public:
	ScenesCountPopTest();
	~ScenesCountPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Scenes unit;
	int itterations;
};
