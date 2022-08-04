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

	output += testScene();

	return output;
}

std::string ImplementationPopTester::testScene()
{
	return ImplementationPopSceneTest().test();
}
