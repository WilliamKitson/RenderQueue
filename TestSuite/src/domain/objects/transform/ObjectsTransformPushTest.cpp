#include "ObjectsTransformPushTest.h"

ObjectsTransformPushTest::ObjectsTransformPushTest()
	: itterations{ 4 }
{
}

ObjectsTransformPushTest::~ObjectsTransformPushTest()
{
}

std::string ObjectsTransformPushTest::test()
{
	RenderQueue::Objects unit;

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

	int successes = 0;

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

		successes += success;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "objects transform push test failed\n";
}
