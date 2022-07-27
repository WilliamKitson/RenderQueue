#pragma once

#include <string>
#include "BindingsIndexPopTest.h"

class BindingsIndexTester
{
public:
	BindingsIndexTester();
	~BindingsIndexTester();

	std::string test();

private:
	std::string testPop();
};
