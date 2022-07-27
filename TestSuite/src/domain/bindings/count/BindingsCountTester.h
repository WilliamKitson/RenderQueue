#pragma once

#include <string>
#include "BindingsCountDefaultTest.h"

class BindingsCountTester
{
public:
	BindingsCountTester();
	~BindingsCountTester();

	std::string test();

private:
	std::string testDefault();
};
