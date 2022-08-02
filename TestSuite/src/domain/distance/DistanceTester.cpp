#include "DistanceTester.h"

DistanceTester::DistanceTester()
{
}

DistanceTester::~DistanceTester()
{
}

std::string DistanceTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string DistanceTester::testDefault()
{
	return DistanceDefaultTest().test();
}
