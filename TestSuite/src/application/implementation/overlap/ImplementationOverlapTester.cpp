#include "ImplementationOverlapTester.h"

ImplementationOverlapTester::ImplementationOverlapTester()
{
}

ImplementationOverlapTester::~ImplementationOverlapTester()
{
}

std::string ImplementationOverlapTester::test()
{
	std::string output{ "" };

	output += testFalse();

	return output;
}

std::string ImplementationOverlapTester::testFalse()
{
	return ImplementationOverlapFalseTest().test();
}
