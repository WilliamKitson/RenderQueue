#include "ScenesTester.h"

ScenesTester::ScenesTester()
{
}

ScenesTester::~ScenesTester()
{
}

std::string ScenesTester::test()
{
	std::string output{ "" };

	output += testCount();
	output += testCamera();
	output += testAmbience();
	output += testIndex();

	return output;
}

std::string ScenesTester::testCount()
{
	return ScenesCountTester().test();
}

std::string ScenesTester::testCamera()
{
	return ScenesCameraTester().test();
}

std::string ScenesTester::testAmbience()
{
	return ScenesAmbienceTester().test();
}

std::string ScenesTester::testIndex()
{
	return ScenesIndexTester().test();
}
