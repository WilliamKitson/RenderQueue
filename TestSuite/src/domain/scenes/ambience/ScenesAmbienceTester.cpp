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
	output += testEmpty();
	output += testPop();

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

std::string ScenesAmbienceTester::testEmpty()
{
	return ScenesAmbienceEmptyTest().test();
}

std::string ScenesAmbienceTester::testPop()
{
	return ScenesAmbiencePopTest().test();
}
