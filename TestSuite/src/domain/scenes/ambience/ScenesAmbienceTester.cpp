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
	output += testPush();

	return output;
}

std::string ScenesAmbienceTester::testDefault()
{
	return ScenesAmbienceDefaultTest().test();
}

std::string ScenesAmbienceTester::testPush()
{
	return ScenesAmbiencePushTest().test();
}
