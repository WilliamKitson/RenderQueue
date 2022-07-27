#include "ObjectsTransformPopTest.h"

ObjectsTransformPopTest::ObjectsTransformPopTest()
	: itterations{ 4 }
{
}

ObjectsTransformPopTest::~ObjectsTransformPopTest()
{
}

std::string ObjectsTransformPopTest::test()
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

		successes += success;
	}

	if (successes == itterations - 1)
	{
		return std::string();
	}

	return "objects transform pop test failed\n";
}
