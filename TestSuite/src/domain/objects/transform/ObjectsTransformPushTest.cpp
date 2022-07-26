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

		bool success = true;

		for (int i2{ 0 }; i2 < 9; i2++)
		{
			if (unit.getXpos() != (float)i)
			{
				success = false;
			}
		}

		output += success;
	}

	return output;
}
