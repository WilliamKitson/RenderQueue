#include "ImplementationDistanceTester.h"

ImplementationDistanceTester::ImplementationDistanceTester()
{
}

ImplementationDistanceTester::~ImplementationDistanceTester()
{
}

std::string ImplementationDistanceTester::test()
{
	std::string output{ "" };

	output += testRendered();

	return output;
}

std::string ImplementationDistanceTester::testRendered()
{
	return ImplementationDistanceRenderedTest().test();
}
