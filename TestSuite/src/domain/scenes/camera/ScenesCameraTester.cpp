#include "ScenesCameraTester.h"

ScenesCameraTester::ScenesCameraTester()
{
}

ScenesCameraTester::~ScenesCameraTester()
{
}

std::string ScenesCameraTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string ScenesCameraTester::testDefault()
{
	return ScenesCameraDefaultTest().test();
}
