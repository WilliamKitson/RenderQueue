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
	output += testPop();

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

std::string BindingsCountTester::testPop()
{
	return BindingsCountPopTest().test();
}
