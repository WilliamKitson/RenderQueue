#include "BindingsSceneTester.h"

BindingsSceneTester::BindingsSceneTester()
{
}

BindingsSceneTester::~BindingsSceneTester()
{
}

std::string BindingsSceneTester::test()
{
	std::string output{ "" };

	output += testPush();

	return output;
}

std::string BindingsSceneTester::testPush()
{
	return BindingsScenePushTest().test();
}
