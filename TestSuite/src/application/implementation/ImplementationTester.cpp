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
	output += testRender();

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

std::string ImplementationTester::testRender()
{
	return ImplementationRenderTester().test();
}
