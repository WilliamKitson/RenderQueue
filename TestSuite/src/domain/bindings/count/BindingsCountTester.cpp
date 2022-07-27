#include "BindingsCountTester.h"

BindingsCountTester::BindingsCountTester()
{
}

BindingsCountTester::~BindingsCountTester()
{
}

std::string BindingsCountTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string BindingsCountTester::testDefault()
{
	return BindingsCountDefaultTest().test();
}
