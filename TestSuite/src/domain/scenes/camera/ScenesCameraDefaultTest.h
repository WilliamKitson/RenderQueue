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
	bool rotation();
	bool settings();

private:
	renderQueue::Scenes unit;
};
