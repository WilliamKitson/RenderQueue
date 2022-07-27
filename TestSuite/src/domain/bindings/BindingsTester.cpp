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

	return output;
}

std::string BindingsTester::testCount()
{
	return BindingsCountTester().test();
}
