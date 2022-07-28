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

	return output;
}

std::string ScenesTester::testCount()
{
	return ScenesCountTester().test();
}
