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

	if (successes() == itterations * itterations)
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
		objects();
	}
}

void ImplementationPushTransformTest::objects()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::Transform transform{
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

		unit->pushObject();
		unit->setObject(i);
		unit->setTransform(transform);
	}
}

int ImplementationPushTransformTest::successes()
{
	int output = 0;

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

			output += success;
		}
	}

	return output;
}
