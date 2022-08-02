#include "ImplementationRenderTester.h"

ImplementationRenderTester::ImplementationRenderTester()
{
}

ImplementationRenderTester::~ImplementationRenderTester()
{
}

std::string ImplementationRenderTester::test()
{
	std::string output{ "" };

	output += testWithin();

	return output;
}

std::string ImplementationRenderTester::testWithin()
{
	return ImplementationRenderWithinTest().test();
}
