#include "ObjectsColourPushTest.h"

ObjectsColourPushTest::ObjectsColourPushTest()
	: unit(), itterations{ 4 }
{
	initialise();
}

ObjectsColourPushTest::~ObjectsColourPushTest()
{
}

std::string ObjectsColourPushTest::test()
{
	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		bool success = true;

		if (unit.getRed() != (float)i)
		{
			success = false;
		}

		if (unit.getGreen() != (float)i)
		{
			success = false;
		}

		if (unit.getBlue() != (float)i)
		{
			success = false;
		}

		if (unit.getAlpha() != (float)i)
		{
			success = false;
		}

		successes += success;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "objects colour push test failed\n";
}

void ObjectsColourPushTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float colour[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.push();
		unit.setIndex(i);
		unit.setColour(colour);
	}
}
