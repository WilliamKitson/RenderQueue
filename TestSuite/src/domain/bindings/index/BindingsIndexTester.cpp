#include "BindingsIndexTester.h"

BindingsIndexTester::BindingsIndexTester()
{
}

BindingsIndexTester::~BindingsIndexTester()
{
}

std::string BindingsIndexTester::test()
{
	std::string output{ "" };

	output += testPop();
	output += testMinimum();
	output += testMaximum();

	return output;
}

std::string BindingsIndexTester::testPop()
{
	return BindingsIndexPopTest().test();
}

std::string BindingsIndexTester::testMinimum()
{
	return BindingsIndexMinimumTest().test();
}

std::string BindingsIndexTester::testMaximum()
{
	return BindingsIndexMaximumTest().test();
}
