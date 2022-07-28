#pragma once

#include <string>

#include "count/ScenesCountTester.h"
#include "camera/ScenesCameraTester.h"
#include "ambience/ScenesAmbienceTester.h"
#include "index/ScenesIndexTester.h"

class ScenesTester
{
public:
	ScenesTester();
	~ScenesTester();

	std::string test();

private:
	std::string testCount();
	std::string testCamera();
	std::string testAmbience();
	std::string testIndex();
};
