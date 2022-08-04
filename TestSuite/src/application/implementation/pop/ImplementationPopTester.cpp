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
	output += testObject();

	return output;
}

std::string ImplementationPopTester::testScene()
{
	return ImplementationPopSceneTest().test();
}

std::string ImplementationPopTester::testObject()
{
	return ImplementationPopObjectTest().test();
}
