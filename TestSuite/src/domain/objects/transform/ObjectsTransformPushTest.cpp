#include "ObjectsTransformPushTest.h"

ObjectsTransformPushTest::ObjectsTransformPushTest()
	: unit(), itterations{ 4 }
{
}

ObjectsTransformPushTest::~ObjectsTransformPushTest()
{
}

std::string ObjectsTransformPushTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "objects transform push test failed\n";
}

void ObjectsTransformPushTest::initialise()
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

int ObjectsTransformPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += success((float)i);
	}

	return output;
}

bool ObjectsTransformPushTest::success(float input)
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

bool ObjectsTransformPushTest::position(float input)
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

bool ObjectsTransformPushTest::rotation(float input)
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

bool ObjectsTransformPushTest::scale(float input)
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
