#pragma once

#include <string>
#include "Scenes.h"

class ScenesIndexPopTest
{
public:
	ScenesIndexPopTest();
	~ScenesIndexPopTest();

	std::string test();

private:
	void initialise();
	bool success();

private:
	renderQueue::Scenes unit;
};
