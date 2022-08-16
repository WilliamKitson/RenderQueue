#pragma once

#include <string>
#include "Scenes.h"

class ScenesCameraPopTest
{
public:
	ScenesCameraPopTest();
	~ScenesCameraPopTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);
	bool position(float);
	bool rotation(float);

private:
	renderQueue::Scenes unit;
	int itterations;
};
