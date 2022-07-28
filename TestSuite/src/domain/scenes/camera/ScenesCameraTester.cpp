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
	output += testPush();
	output += testEmpty();

	return output;
}

std::string ScenesCameraTester::testDefault()
{
	return ScenesCameraDefaultTest().test();
}

std::string ScenesCameraTester::testPush()
{
	return ScenesCameraPushTest().test();
}

std::string ScenesCameraTester::testEmpty()
{
	return ScenesCameraEmptyTest().test();
}
