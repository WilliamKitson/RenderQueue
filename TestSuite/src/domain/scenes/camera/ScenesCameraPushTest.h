#pragma once

#include <string>
#include "Scenes.h"

class ScenesCameraPushTest
{
public:
	ScenesCameraPushTest();
	~ScenesCameraPushTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);

private:
	renderQueue::Scenes unit;
	int itterations;
};
