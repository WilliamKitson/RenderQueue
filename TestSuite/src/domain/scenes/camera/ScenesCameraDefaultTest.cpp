#include "ScenesCameraDefaultTest.h"

ScenesCameraDefaultTest::ScenesCameraDefaultTest()
{
}

ScenesCameraDefaultTest::~ScenesCameraDefaultTest()
{
}

std::string ScenesCameraDefaultTest::test()
{
	renderQueue::Scenes unit;
	unit.push();

	bool success = true;

	if (unit.getXpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getYpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getZpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getXrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getYrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getZrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getFrustum() != 90.0f)
	{
		success = false;
	}

	if (success)
	{
		return std::string();
	}

	return "scenes camera default test failed\n";
}
