#pragma once

#include <string>
#include "ScenesCameraDefaultTest.h"

class ScenesCameraTester
{
public:
	ScenesCameraTester();
	~ScenesCameraTester();

	std::string test();

private:
	std::string testDefault();
};
