#pragma once

#include <string>
#include "Bindings.h"

class BindingsScenePushTest
{
public:
	BindingsScenePushTest();
	~BindingsScenePushTest();

	std::string test();

private:
	void initialise();

private:
	renderQueue::Bindings unit;
	int itterations;
};
