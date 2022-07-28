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

	return output;
}

std::string ScenesIndexTester::testPop()
{
	return ScenesIndexPopTest().test();
}
