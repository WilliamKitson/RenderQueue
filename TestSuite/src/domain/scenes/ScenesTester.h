#pragma once

#include <string>
#include "count/ScenesCountTester.h"

class ScenesTester
{
public:
	ScenesTester();
	~ScenesTester();

	std::string test();

private:
	std::string testCount();
};
