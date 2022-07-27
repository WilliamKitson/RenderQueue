#pragma once

#include <string>

#include "BindingsIndexPopTest.h"
#include "BindingsIndexMinimumTest.h"

class BindingsIndexTester
{
public:
	BindingsIndexTester();
	~BindingsIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
};
