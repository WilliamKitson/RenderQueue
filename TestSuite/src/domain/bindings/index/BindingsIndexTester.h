#pragma once

#include <string>

#include "BindingsIndexPopTest.h"
#include "BindingsIndexMinimumTest.h"
#include "BindingsIndexMaximumTest.h"

class BindingsIndexTester
{
public:
	BindingsIndexTester();
	~BindingsIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
	std::string testMaximum();
};
