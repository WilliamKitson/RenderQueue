#include "ImplementationPushTransformTest.h"

ImplementationPushTransformTest::ImplementationPushTransformTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPushTransformTest::~ImplementationPushTransformTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPushTransformTest::test()
{
	scenes();

	int successes = 0;

	for (int i{ 0 }; i < unit->getScenes(); i++)
	{
		unit->setScene(i);

		for (int i2{ 0 }; i2 < unit->getObjects(); i2++)
		{
			unit->setObject(i2);

			renderQueue::Transform transform = unit->getTransform();

			bool success = true;

			if (transform.xpos != (float)i2)
			{
				success = false;
			}

			if (transform.ypos != (float)i2)
			{
				success = false;
			}

			if (transform.xpos != (float)i2)
			{
				success = false;
			}

			if (transform.xrot != (float)i2)
			{
				success = false;
			}

			if (transform.yrot != (float)i2)
			{
				success = false;
			}

			if (transform.zrot != (float)i2)
			{
				success = false;
			}

			if (transform.xscale != (float)i2)
			{
				success = false;
			}

			if (transform.yscale != (float)i2)
			{
				success = false;
			}

			if (transform.zscale != (float)i2)
			{
				success = false;
			}

			successes += success;
		}
	}

	if (successes == itterations * itterations)
	{
		return std::string();
	}

	return "implementation push transform test failed\n";
}

void ImplementationPushTransformTest::scenes()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);

		for (int i2{ 0 }; i2 < itterations; i2++)
		{
			renderQueue::Transform transform{
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2,
				(float)i2
			};

			unit->pushObject();
			unit->setObject(i2);
			unit->setTransform(transform);
		}
	}
}
