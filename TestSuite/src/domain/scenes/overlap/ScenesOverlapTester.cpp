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
	output += testEmpty();
	output += testPop();

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

std::string ScenesOverlapTester::testEmpty()
{
	return ScenesOverlapEmptyTest().test();
}

std::string ScenesOverlapTester::testPop()
{
	return ScenesOverlapPopTest().test();
}
