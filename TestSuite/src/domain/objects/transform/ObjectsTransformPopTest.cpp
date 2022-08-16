#include "ObjectsTransformPopTest.h"

ObjectsTransformPopTest::ObjectsTransformPopTest()
	: unit(), itterations{ 4 }
{
}

ObjectsTransformPopTest::~ObjectsTransformPopTest()
{
}

std::string ObjectsTransformPopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "objects transform pop test failed\n";
}

void ObjectsTransformPopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float transform[] = {
			(float)i,
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
		unit.setTransform(transform);
	}
}

int ObjectsTransformPopTest::successes()
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

bool ObjectsTransformPopTest::success(float input)
{
	if (!position(input))
	{
		return false;
	}

	if (!rotation(input))
	{
		return false;
	}

	if (!scale(input))
	{
		return false;
	}

	return true;
}

bool ObjectsTransformPopTest::position(float input)
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

bool ObjectsTransformPopTest::rotation(float input)
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

bool ObjectsTransformPopTest::scale(float input)
{
	if (unit.getXscale() != input)
	{
		return false;
	}

	if (unit.getYscale() != input)
	{
		return false;
	}

	if (unit.getZscale() != input)
	{
		return false;
	}

	return true;
}
