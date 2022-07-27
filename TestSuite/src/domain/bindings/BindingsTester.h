#pragma once

#include <string>
#include "count/BindingsCountTester.h"

class BindingsTester
{
public:
	BindingsTester();
	~BindingsTester();

	std::string test();

private:
	std::string testCount();
};
