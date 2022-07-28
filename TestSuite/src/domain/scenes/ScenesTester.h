#pragma once

#include <string>

#include "count/ScenesCountTester.h"
#include "camera/ScenesCameraTester.h"

class ScenesTester
{
public:
	ScenesTester();
	~ScenesTester();

	std::string test();

private:
	std::string testCount();
	std::string testCamera();
};
