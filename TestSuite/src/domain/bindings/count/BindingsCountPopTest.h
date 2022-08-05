#pragma once

#include <string>
#include "Bindings.h"

class BindingsCountPopTest
{
public:
	BindingsCountPopTest();
	~BindingsCountPopTest();

	std::string test();

private:
	void initialise();
	int successes();

private:
	renderQueue::Bindings unit;
	int itterations;
};
