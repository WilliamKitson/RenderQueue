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

private:
	renderQueue::Scenes unit;
};
