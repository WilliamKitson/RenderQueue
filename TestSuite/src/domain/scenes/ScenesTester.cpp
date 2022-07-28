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
