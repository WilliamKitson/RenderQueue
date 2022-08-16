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
	bool success(float);
	bool position(float);
	bool rotation(float);
	bool scale(float);

private:
	renderQueue::Objects unit;
	int itterations;
};
