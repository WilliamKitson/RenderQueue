#include "ElementsIndexTester.h"

ElementsIndexTester::ElementsIndexTester()
{
}

ElementsIndexTester::~ElementsIndexTester()
{
}

std::string ElementsIndexTester::test()
{
	std::string output{ "" };

	output += testPop();
	output += testMinimum();
	output += testMaximum();

	return output;
}

std::string ElementsIndexTester::testPop()
{
	return ElementsIndexPopTest().test();
}

std::string ElementsIndexTester::testMinimum()
{
	return ElementsIndexMinimumTest().test();
}

std::string ElementsIndexTester::testMaximum()
{
	return ElementsIndexMaximumTest().test();
}
