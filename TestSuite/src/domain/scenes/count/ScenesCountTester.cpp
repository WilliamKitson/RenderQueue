#include "ScenesCountTester.h"

ScenesCountTester::ScenesCountTester()
{
}

ScenesCountTester::~ScenesCountTester()
{
}

std::string ScenesCountTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();
	output += testPop();
	output += testMinimum();

	return output;
}

std::string ScenesCountTester::testDefault()
{
	return ScenesCountDefaultTest().test();
}

std::string ScenesCountTester::testPush()
{
	return ScenesCountPushTest().test();
}

std::string ScenesCountTester::testPop()
{
	return ScenesCountPopTest().test();
}

std::string ScenesCountTester::testMinimum()
{
	return ScenesCountMinimumTest().test();
}
