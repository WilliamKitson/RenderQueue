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
