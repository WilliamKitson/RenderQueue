#include "ImplementationTester.h"

ImplementationTester::ImplementationTester()
{
}

ImplementationTester::~ImplementationTester()
{
}

std::string ImplementationTester::test()
{
	std::string output{ "" };

	output += testPush();
	output += testPop();

	return output;
}

std::string ImplementationTester::testPush()
{
	return ImplementationPushTester().test();
}

std::string ImplementationTester::testPop()
{
	return ImplementationPopTester().test();
}
