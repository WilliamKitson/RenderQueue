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

	return output;
}

std::string BindingsIndexTester::testPop()
{
	return BindingsIndexPopTest().test();
}
