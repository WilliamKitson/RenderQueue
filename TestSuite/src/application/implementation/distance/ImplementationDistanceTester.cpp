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
	output += testUnrendered();

	return output;
}

std::string ImplementationDistanceTester::testRendered()
{
	return ImplementationDistanceRenderedTest().test();
}

std::string ImplementationDistanceTester::testUnrendered()
{
	return ImplementationDistanceUnrenderedTest().test();
}
