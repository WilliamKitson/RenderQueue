#pragma once

#include <string>

#include "ScenesCameraDefaultTest.h"
#include "ScenesCameraPushTest.h"

class ScenesCameraTester
{
public:
	ScenesCameraTester();
	~ScenesCameraTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
};
