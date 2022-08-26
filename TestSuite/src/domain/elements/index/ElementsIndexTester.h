#pragma once

#include <string>

#include "ElementsIndexPopTest.h"
#include "ElementsIndexMinimumTest.h"
#include "ElementsIndexMaximumTest.h"

class ElementsIndexTester
{
public:
	ElementsIndexTester();
	~ElementsIndexTester();

	std::string test();

private:
	std::string testPop();
	std::string testMinimum();
	std::string testMaximum();
};
