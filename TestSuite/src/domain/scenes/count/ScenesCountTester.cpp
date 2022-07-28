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
