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
	if (successes() == itterations)
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

int ObjectsColourPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += success((float)i);
	}

	return output;
}

bool ObjectsColourPushTest::success(float input)
{
	if (unit.getRed() != input)
	{
		return false;
	}

	if (unit.getGreen() != input)
	{
		return false;
	}

	if (unit.getBlue() != input)
	{
		return false;
	}

	if (unit.getAlpha() != input)
	{
		return false;
	}

	return true;
}
