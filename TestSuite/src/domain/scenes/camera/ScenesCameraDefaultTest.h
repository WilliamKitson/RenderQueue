#pragma once

#include <string>
#include "Scenes.h"

class ScenesCameraDefaultTest
{
public:
	ScenesCameraDefaultTest();
	~ScenesCameraDefaultTest();

	std::string test();

private:
	bool success();
	bool position();

private:
	renderQueue::Scenes unit;
};
