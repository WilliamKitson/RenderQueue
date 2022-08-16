#pragma once

#include <string>
#include "Objects.h"

class ObjectsTransformEmptyTest
{
public:
	ObjectsTransformEmptyTest();
	~ObjectsTransformEmptyTest();

	std::string test();

private:
	bool success();
	bool position();
	bool rotation();
	bool scale();

private:
	renderQueue::Objects unit;
};
