#include "DomainTester.h"

DomainTester::DomainTester()
{
}

DomainTester::~DomainTester()
{
}

std::string DomainTester::test()
{
	std::string output{ "" };

	output += testObjects();

	return output;
}

std::string DomainTester::testObjects()
{
	return ObjectsTester().test();
}
