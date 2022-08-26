#include "ElementsElementTester.h"

ElementsElementTester::ElementsElementTester()
{
}

ElementsElementTester::~ElementsElementTester()
{
}

std::string ElementsElementTester::test()
{
	std::string output{ "" };

	output += testMinimum();
	output += testMaximum();

	return output;
}

std::string ElementsElementTester::testMinimum()
{
	return ElementsElementMinimumTest().test();
}

std::string ElementsElementTester::testMaximum()
{
	return ElementsElementMaximumTest().test();
}
