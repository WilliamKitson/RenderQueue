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

	return output;
}

std::string ScenesCountTester::testDefault()
{
	return ScenesCountDefaultTest().test();
}
