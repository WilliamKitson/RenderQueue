#include "ImplementationPushAmbienceTest.h"

ImplementationPushAmbienceTest::ImplementationPushAmbienceTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPushAmbienceTest::~ImplementationPushAmbienceTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPushAmbienceTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "implementation push ambience test failed\n";
}

void ImplementationPushAmbienceTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::RGBA ambience{
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit->pushScene();
		unit->setScene(i);
		unit->setAmbience(ambience);
	}
}

int ImplementationPushAmbienceTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getScenes(); i++)
	{
		unit->setScene(i);

		output += success(
			unit->getAmbience(),
			(float)i
		);
	}

	return output;
}

bool ImplementationPushAmbienceTest::success(renderQueue::RGBA ambience, float index)
{
	if (ambience.red != index)
	{
		return false;
	}

	if (ambience.green != index)
	{
		return false;
	}

	if (ambience.blue != index)
	{
		return false;
	}

	if (ambience.alpha != index)
	{
		return false;
	}

	return true;
}
