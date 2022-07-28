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
	if (unit.getXpos() != 0.0f)
	{
		return false;
	}

	if (unit.getYpos() != 0.0f)
	{
		return false;
	}

	if (unit.getZpos() != 0.0f)
	{
		return false;
	}

	if (unit.getXrot() != 0.0f)
	{
		return false;
	}

	if (unit.getYrot() != 0.0f)
	{
		return false;
	}

	if (unit.getZrot() != 0.0f)
	{
		return false;
	}

	if (unit.getFrustum() != 0.0f)
	{
		return false;
	}

	return true;
}
