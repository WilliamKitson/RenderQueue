#pragma once

#include <string>
#include "Bindings.h"

class BindingsCountPushTest
{
public:
	BindingsCountPushTest();
	~BindingsCountPushTest();

	std::string test();

private:
	int itterations;
};
