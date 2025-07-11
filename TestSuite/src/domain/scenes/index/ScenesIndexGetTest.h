#pragma once

#include <string>
#include "Scenes.h"

class ScenesIndexGetTest
{
public:
	ScenesIndexGetTest();
	~ScenesIndexGetTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Scenes unit;
	int itterations;
};
