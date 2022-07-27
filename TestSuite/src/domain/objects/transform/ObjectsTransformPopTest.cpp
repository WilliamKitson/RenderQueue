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

		bool success = true;

		if (unit.getXpos() != (float)i)
		{
			success = false;
		}

		if (unit.getYpos() != (float)i)
		{
			success = false;
		}

		if (unit.getZpos() != (float)i)
		{
			success = false;
		}

		if (unit.getXrot() != (float)i)
		{
			success = false;
		}

		if (unit.getYrot() != (float)i)
		{
			success = false;
		}

		if (unit.getZrot() != (float)i)
		{
			success = false;
		}

		if (unit.getXscale() != (float)i)
		{
			success = false;
		}

		if (unit.getYscale() != (float)i)
		{
			success = false;
		}

		if (unit.getZscale() != (float)i)
		{
			success = false;
		}

		output += success;
	}

	return output;
}
