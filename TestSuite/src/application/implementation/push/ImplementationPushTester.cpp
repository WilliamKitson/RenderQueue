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

	return output;
}

std::string ImplementationPushTester::testCamera()
{
	return ImplementationPushCameraTest().test();
}
