#pragma once

#include <string>
#include "Objects.h"

class ObjectsTransformPopTest
{
public:
	ObjectsTransformPopTest();
	~ObjectsTransformPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	RenderQueue::Objects unit;
	int itterations;
};
