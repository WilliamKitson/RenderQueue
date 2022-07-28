#include "ScenesIndexTester.h"

ScenesIndexTester::ScenesIndexTester()
{
}

ScenesIndexTester::~ScenesIndexTester()
{
}

std::string ScenesIndexTester::test()
{
	std::string output{ "" };

	output += testPop();
	output += testMinimum();
	output += testMaximum();

	return output;
}

std::string ScenesIndexTester::testPop()
{
	return ScenesIndexPopTest().test();
}

std::string ScenesIndexTester::testMinimum()
{
	return ScenesIndexMinimumTest().test();
}

std::string ScenesIndexTester::testMaximum()
{
	return ScenesIndexMaximumTest().test();
}
