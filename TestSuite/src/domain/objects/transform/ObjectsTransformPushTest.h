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

private:
	RenderQueue::Objects unit;
	int itterations;
};
