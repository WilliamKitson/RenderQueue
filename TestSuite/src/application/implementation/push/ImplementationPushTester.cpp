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
	output += testTransform();
	output += testColour();
	output += testInvalid();

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

std::string ImplementationPushTester::testTransform()
{
	return ImplementationPushTransformTest().test();
}

std::string ImplementationPushTester::testColour()
{
	return ImplementationPushColourTest().test();
}

std::string ImplementationPushTester::testInvalid()
{
	return ImplementationPushInvalidTest().test();
}
