#include "ScenesCameraPushTest.h"

ScenesCameraPushTest::ScenesCameraPushTest()
	: unit(), itterations{ 4 }
{
}

ScenesCameraPushTest::~ScenesCameraPushTest()
{
}

std::string ScenesCameraPushTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes camera push test failed\n";
}

void ScenesCameraPushTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float camera[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.push();
		unit.setIndex(i);
		unit.setCamera(camera);
	}
}

int ScenesCameraPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += success((float)i);
	}

	return output;
}

bool ScenesCameraPushTest::success(float input)
{
	if (unit.getXpos() != input)
	{
		return false;
	}

	if (unit.getYpos() != input)
	{
		return false;
	}

	if (unit.getZpos() != input)
	{
		return false;
	}

	if (unit.getXrot() != input)
	{
		return false;
	}

	if (unit.getYrot() != input)
	{
		return false;
	}

	if (unit.getZrot() != input)
	{
		return false;
	}

	if (unit.getFrustum() != input)
	{
		return false;
	}

	return true;
}
