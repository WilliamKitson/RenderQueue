#pragma once

#include <string>
#include "Objects.h"

class ObjectsIndexPopTest
{
public:
	ObjectsIndexPopTest();
	~ObjectsIndexPopTest();

	std::string test();

private:
	void initialise();
	bool success();

private:
	RenderQueue::Objects unit;
};
