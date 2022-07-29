#include "ImplementationPushTester.h"

ImplementationPushTester::ImplementationPushTester()
{
}

ImplementationPushTester::~ImplementationPushTester()
{
}

std::string ImplementationPushTester::test()
{
	std::string output{ "" };

	output += testCamera();
	output += testAmbience();

	return output;
}

std::string ImplementationPushTester::testCamera()
{
	return ImplementationPushCameraTest().test();
}

std::string ImplementationPushTester::testAmbience()
{
	return ImplementationPushAmbienceTest().test();
}
