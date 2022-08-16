#pragma once

#include <string>
#include "Scenes.h"

class ScenesCameraEmptyTest
{
public:
	ScenesCameraEmptyTest();
	~ScenesCameraEmptyTest();

	std::string test();

private:
	bool success();
	bool position();
	bool rotation();
	bool settings();

private:
	renderQueue::Scenes unit;
};
