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

	if (sSuccesses() == itterations * itterations)
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

int ImplementationPushTransformTest::sSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getScenes(); i++)
	{
		unit->setScene(i);
		output += oSuccesses();
	}

	return output;
}

int ImplementationPushTransformTest::oSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getObjects(); i++)
	{
		unit->setObject(i);

		renderQueue::Transform transform = unit->getTransform();

		bool success = true;

		if (transform.xpos != (float)i)
		{
			success = false;
		}

		if (transform.ypos != (float)i)
		{
			success = false;
		}

		if (transform.xpos != (float)i)
		{
			success = false;
		}

		if (transform.xrot != (float)i)
		{
			success = false;
		}

		if (transform.yrot != (float)i)
		{
			success = false;
		}

		if (transform.zrot != (float)i)
		{
			success = false;
		}

		if (transform.xscale != (float)i)
		{
			success = false;
		}

		if (transform.yscale != (float)i)
		{
			success = false;
		}

		if (transform.zscale != (float)i)
		{
			success = false;
		}

		output += success;
	}

	return output;
}
