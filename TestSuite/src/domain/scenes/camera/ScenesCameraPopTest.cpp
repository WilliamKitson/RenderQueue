#include "ScenesCameraPopTest.h"

ScenesCameraPopTest::ScenesCameraPopTest()
	: unit(), itterations{ 4 }
{
}

ScenesCameraPopTest::~ScenesCameraPopTest()
{
}

std::string ScenesCameraPopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "scenes camera pop test failed\n";
}

void ScenesCameraPopTest::initialise()
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
			(float)i,
			(float)i
		};

		unit.push();
		unit.setIndex(i);
		unit.setCamera(camera);
	}
}

int ScenesCameraPopTest::successes()
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit.setIndex(0);
		unit.pop();
		output += success((float)i);
	}

	return output;
}

bool ScenesCameraPopTest::success(float input)
{
	if (!position(input))
	{
		return false;
	}

	if (!rotation(input))
	{
		return false;
	}

	if (unit.getFrustum() != input)
	{
		return false;
	}

	if (unit.getDrawDistance() != input)
	{
		return false;
	}

	return true;
}

bool ScenesCameraPopTest::position(float input)
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

	return true;
}

bool ScenesCameraPopTest::rotation(float input)
{
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

	return true;
}
