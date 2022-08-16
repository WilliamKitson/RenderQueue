#include "ScenesCameraEmptyTest.h"

ScenesCameraEmptyTest::ScenesCameraEmptyTest()
	: unit()
{
}

ScenesCameraEmptyTest::~ScenesCameraEmptyTest()
{
}

std::string ScenesCameraEmptyTest::test()
{
	float camera[] = {
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	unit.setCamera(camera);

	if (success())
	{
		return std::string();
	}

	return "scenes camera empty test failed\n";
}

bool ScenesCameraEmptyTest::success()
{
	if (!position())
	{
		return false;
	}

	if (!rotation())
	{
		return false;
	}

	if (!settings())
	{
		return false;
	}

	return true;
}

bool ScenesCameraEmptyTest::position()
{
	if (unit.getXpos())
	{
		return false;
	}

	if (unit.getYpos())
	{
		return false;
	}

	if (unit.getZpos())
	{
		return false;
	}

	return true;
}

bool ScenesCameraEmptyTest::rotation()
{
	if (unit.getXrot())
	{
		return false;
	}

	if (unit.getYrot())
	{
		return false;
	}

	if (unit.getZrot())
	{
		return false;
	}

	return true;
}

bool ScenesCameraEmptyTest::settings()
{
	if (unit.getFrustum())
	{
		return false;
	}

	if (unit.getDrawDistance())
	{
		return false;
	}

	return true;
}
