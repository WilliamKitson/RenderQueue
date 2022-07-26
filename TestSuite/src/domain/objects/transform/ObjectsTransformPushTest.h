#pragma once

#include <string>
#include "Objects.h"

class ObjectsTransformPushTest
{
public:
	ObjectsTransformPushTest();
	~ObjectsTransformPushTest();

	std::string test();

private:
	void initialise();
	int successes();
	bool success(float);

private:
	RenderQueue::Objects unit;
	int itterations;
};
