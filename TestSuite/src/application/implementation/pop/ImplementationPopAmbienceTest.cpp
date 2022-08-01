#include "ImplementationPopAmbienceTest.h"

ImplementationPopAmbienceTest::ImplementationPopAmbienceTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPopAmbienceTest::~ImplementationPopAmbienceTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPopAmbienceTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "implementation pop ambience test failed\n";
}

void ImplementationPopAmbienceTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::RGBA colour{
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit->pushScene();
		unit->setScene(i);
		unit->setAmbience(colour);
	}
}

int ImplementationPopAmbienceTest::successes()
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit->setScene(0);
		unit->popScene();

		output += success(
			unit->getAmbience(),
			(float)i
		);
	}

	return output;
}

bool ImplementationPopAmbienceTest::success(renderQueue::RGBA camera, float index)
{
	if (camera.red != index)
	{
		return false;
	}

	if (camera.green != index)
	{
		return false;
	}

	if (camera.blue != index)
	{
		return false;
	}

	if (camera.alpha != index)
	{
		return false;
	}

	return true;
}
