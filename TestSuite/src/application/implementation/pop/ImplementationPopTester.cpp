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

	return output;
}

std::string ImplementationPopTester::testCamera()
{
	return ImplementationPopCameraTest().test();
}
