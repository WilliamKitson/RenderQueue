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
		objects((float)i);
	}
}

void ImplementationPushTransformTest::objects(float input)
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::Transform transform{
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input,
			(float)i + input
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
		output += oSuccesses(i);
	}

	return output;
}

int ImplementationPushTransformTest::oSuccesses(float input)
{
	int output = 0;

	for (int i{ 0 }; i < unit->getObjects(); i++)
	{
		unit->setObject(i);

		output += success(
			unit->getTransform(),
			(float)i + input
		);
	}

	return output;
}

bool ImplementationPushTransformTest::success(renderQueue::Transform transform, float index)
{
	if (transform.xpos != index)
	{
		return false;
	}

	if (transform.ypos != index)
	{
		return false;
	}

	if (transform.xpos != index)
	{
		return false;
	}

	if (transform.xrot != index)
	{
		return false;
	}

	if (transform.yrot != index)
	{
		return false;
	}

	if (transform.zrot != index)
	{
		return false;
	}

	if (transform.xscale != index)
	{
		return false;
	}

	if (transform.yscale != index)
	{
		return false;
	}

	if (transform.zscale != index)
	{
		return false;
	}

	return true;
}
