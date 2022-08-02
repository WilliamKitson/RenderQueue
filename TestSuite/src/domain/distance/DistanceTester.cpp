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
	output += testCamera();

	return output;
}

std::string DistanceTester::testDefault()
{
	return DistanceDefaultTest().test();
}

std::string DistanceTester::testCamera()
{
	return DistanceCameraTest().test();
}
