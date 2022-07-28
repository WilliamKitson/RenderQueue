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
	output += testPop();

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

std::string ScenesCameraTester::testPop()
{
	return ScenesCameraPopTest().test();
}
