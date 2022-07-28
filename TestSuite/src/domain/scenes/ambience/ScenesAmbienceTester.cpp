#include "ScenesAmbienceTester.h"

ScenesAmbienceTester::ScenesAmbienceTester()
{
}

ScenesAmbienceTester::~ScenesAmbienceTester()
{
}

std::string ScenesAmbienceTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string ScenesAmbienceTester::testDefault()
{
	return ScenesAmbienceDefaultTest().test();
}
