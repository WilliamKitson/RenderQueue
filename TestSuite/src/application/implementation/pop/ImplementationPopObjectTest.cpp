#include "ImplementationPopObjectTest.h"

ImplementationPopObjectTest::ImplementationPopObjectTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationPopObjectTest::~ImplementationPopObjectTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPopObjectTest::test()
{
	int itterations = 4;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);

		for (int i2{ 0 }; i2 < itterations; i2++)
		{
			renderQueue::Transform transform{
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2,
				(float)i + i2
			};

			unit->pushObject();
			unit->setObject(i2);
			unit->setTransform(transform);
		}
	}

	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit->setScene(i);

		for (int i2{ 1 }; i2 < itterations; i2++)
		{
			unit->setObject(0);
			unit->popObject();

			renderQueue::Transform transform = unit->getTransform();
			bool success = true;

			if (transform.xpos != i + i2)
			{
				success = false;
			}

			if (transform.ypos != i + i2)
			{
				success = false;
			}

			if (transform.zpos != i + i2)
			{
				success = false;
			}

			if (transform.xrot != i + i2)
			{
				success = false;
			}

			if (transform.yrot != i + i2)
			{
				success = false;
			}

			if (transform.zrot != i + i2)
			{
				success = false;
			}

			if (transform.xscale != i + i2)
			{
				success = false;
			}

			if (transform.yscale != i + i2)
			{
				success = false;
			}

			if (transform.zscale != i + i2)
			{
				success = false;
			}

			successes += success;
		}
	}

	if (successes == (itterations - 1) * itterations)
	{
		return std::string();
	}

	return "implementation pop object test failed\n";
}
