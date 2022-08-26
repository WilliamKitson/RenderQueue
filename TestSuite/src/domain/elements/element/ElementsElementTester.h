#pragma once

#include <string>

#include "ElementsElementMinimumTest.h"
#include "ElementsElementMaximumTest.h"

class ElementsElementTester
{
public:
	ElementsElementTester();
	~ElementsElementTester();

	std::string test();

private:
	std::string testMinimum();
	std::string testMaximum();
};
