#include "ScenesCameraDefaultTest.h"

ScenesCameraDefaultTest::ScenesCameraDefaultTest()
	: unit()
{
}

ScenesCameraDefaultTest::~ScenesCameraDefaultTest()
{
}

std::string ScenesCameraDefaultTest::test()
{
	unit.push();

	if (success())
	{
		return std::string();
	}

	return "scenes camera default test failed\n";
}

bool ScenesCameraDefaultTest::success()
{
	if (!position())
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

	if (unit.getFrustum() != 90.0f)
	{
		return false;
	}

	if (unit.getDrawDistance() != 1000.0f)
	{
		return false;
	}

	return true;
}

bool ScenesCameraDefaultTest::position()
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
