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
	output += testOutside();

	return output;
}

std::string ImplementationRenderTester::testWithin()
{
	return ImplementationRenderWithinTest().test();
}

std::string ImplementationRenderTester::testOutside()
{
	return ImplementationRenderOutsideTest().test();
}
