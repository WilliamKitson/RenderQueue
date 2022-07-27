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
	output += testPush();

	return output;
}

std::string BindingsCountTester::testDefault()
{
	return BindingsCountDefaultTest().test();
}

std::string BindingsCountTester::testPush()
{
	return BindingsCountPushTest().test();
}
