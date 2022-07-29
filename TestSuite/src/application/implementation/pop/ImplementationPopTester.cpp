#include "ImplementationPopTester.h"

ImplementationPopTester::ImplementationPopTester()
{
}

ImplementationPopTester::~ImplementationPopTester()
{
}

std::string ImplementationPopTester::test()
{
	std::string output{ "" };

	output += testCamera();
	output += testAmbience();

	return output;
}

std::string ImplementationPopTester::testCamera()
{
	return ImplementationPopCameraTest().test();
}

std::string ImplementationPopTester::testAmbience()
{
	return ImplementationPopAmbienceTest().test();
}
