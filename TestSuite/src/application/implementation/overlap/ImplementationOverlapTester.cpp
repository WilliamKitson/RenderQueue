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
	output += testTrue();

	return output;
}

std::string ImplementationOverlapTester::testFalse()
{
	return ImplementationOverlapFalseTest().test();
}

std::string ImplementationOverlapTester::testTrue()
{
	return ImplementationOverlapTrueTest().test();
}
