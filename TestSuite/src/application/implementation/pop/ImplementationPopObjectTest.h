#pragma once

#include <string>

#include "Facade.h"
#include "Implementation.h"

class ImplementationPopObjectTest
{
public:
	ImplementationPopObjectTest();
	~ImplementationPopObjectTest();

	std::string test();

private:
	void sInitialise();

private:
	renderQueue::Facade* unit;
	int itterations;
};
