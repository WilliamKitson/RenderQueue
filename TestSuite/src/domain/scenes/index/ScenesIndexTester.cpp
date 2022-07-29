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

	output += testGet();
	output += testPop();
	output += testMinimum();
	output += testMaximum();

	return output;
}

std::string ScenesIndexTester::testGet()
{
	return ScenesIndexGetTest().test();
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
