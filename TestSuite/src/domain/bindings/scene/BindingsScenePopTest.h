#pragma once

#include <string>
#include "Bindings.h"

class BindingsScenePopTest
{
public:
	BindingsScenePopTest();
	~BindingsScenePopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Bindings unit;
	int itterations;
};
