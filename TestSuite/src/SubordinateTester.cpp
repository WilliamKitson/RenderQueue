#include "SubordinateTester.h"

SubordinateTester::SubordinateTester()
{
}

SubordinateTester::~SubordinateTester()
{
}

std::string SubordinateTester::test()
{
	std::string output{ "" };

	output += testDomain();
	output += testApplication();

	return output;
}

std::string SubordinateTester::testDomain()
{
	return DomainTester().test();
}

std::string SubordinateTester::testApplication()
{
	return ApplicationTester().test();
}
