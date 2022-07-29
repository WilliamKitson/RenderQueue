#include "ApplicationTester.h"

ApplicationTester::ApplicationTester()
{
}

ApplicationTester::~ApplicationTester()
{
}

std::string ApplicationTester::test()
{
	std::string output{ "" };

	output += testImplementation();

	return output;
}

std::string ApplicationTester::testImplementation()
{
	return ImplementationTester().test();
}
