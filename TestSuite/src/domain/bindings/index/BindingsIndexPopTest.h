#pragma once

#include <string>
#include "Bindings.h"

class BindingsIndexPopTest
{
public:
	BindingsIndexPopTest();
	~BindingsIndexPopTest();

	std::string test();

private:
	void initialise();

private:
	renderQueue::Bindings unit;
};
