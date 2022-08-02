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

	return output;
}

std::string ScenesOverlapTester::testDefault()
{
	return ScenesOverlapDefaultTest().test();
}
