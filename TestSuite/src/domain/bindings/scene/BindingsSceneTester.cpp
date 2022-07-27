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
	output += testMinimum();
	output += testEmpty();

	return output;
}

std::string BindingsSceneTester::testPush()
{
	return BindingsScenePushTest().test();
}

std::string BindingsSceneTester::testMinimum()
{
	return BindingsSceneMinimumTest().test();
}

std::string BindingsSceneTester::testEmpty()
{
	return BindingsSceneEmptyTest().test();
}
