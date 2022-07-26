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

	return output;
}

std::string SubordinateTester::testDomain()
{
	return DomainTester().test();
}
