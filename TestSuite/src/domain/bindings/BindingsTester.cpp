#include "BindingsTester.h"

BindingsTester::BindingsTester()
{
}

BindingsTester::~BindingsTester()
{
}

std::string BindingsTester::test()
{
	std::string output{ "" };

	output += testCount();
	output += testScene();

	return output;
}

std::string BindingsTester::testCount()
{
	return BindingsCountTester().test();
}

std::string BindingsTester::testScene()
{
	return BindingsSceneTester().test();
}
