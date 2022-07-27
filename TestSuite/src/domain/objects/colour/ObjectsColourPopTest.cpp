#include "ObjectsColourPopTest.h"

ObjectsColourPopTest::ObjectsColourPopTest()
	: unit(), itterations{ 4 }
{
}

ObjectsColourPopTest::~ObjectsColourPopTest()
{
}

std::string ObjectsColourPopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "objects colour pop test failed\n";
}

void ObjectsColourPopTest::initialise()
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

int ObjectsColourPopTest::successes()
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

bool ObjectsColourPopTest::success(float input)
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
