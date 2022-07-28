#pragma once

#include <string>

#include "ScenesCameraDefaultTest.h"
#include "ScenesCameraPushTest.h"
#include "ScenesCameraEmptyTest.h"
#include "ScenesCameraPopTest.h"

class ScenesCameraTester
{
public:
	ScenesCameraTester();
	~ScenesCameraTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPush();
	std::string testEmpty();
	std::string testPop();
};
