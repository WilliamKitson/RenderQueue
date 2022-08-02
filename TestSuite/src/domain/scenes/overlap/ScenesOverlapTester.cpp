#include "ScenesOverlapTester.h"

ScenesOverlapTester::ScenesOverlapTester()
{
}

ScenesOverlapTester::~ScenesOverlapTester()
{
}

std::string ScenesOverlapTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();

	return output;
}

std::string ScenesOverlapTester::testDefault()
{
	return ScenesOverlapDefaultTest().test();
}

std::string ScenesOverlapTester::testPush()
{
	return ScenesOverlapPushTest().test();
}
