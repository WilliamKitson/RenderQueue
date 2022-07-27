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
	output += testBindings();

	return output;
}

std::string DomainTester::testObjects()
{
	return ObjectsTester().test();
}

std::string DomainTester::testBindings()
{
	return BindingsTester().test();
}
