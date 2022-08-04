#include "ImplementationPopObjectTest.h"

ImplementationPopObjectTest::ImplementationPopObjectTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPopObjectTest::~ImplementationPopObjectTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPopObjectTest::test()
{
	sInitialise();

	if (sSuccesses() == (itterations - 1) * itterations)
	{
		return std::string();
	}

	return "implementation pop object test failed\n";
}

void ImplementationPopObjectTest::sInitialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);
		oInitialise((float)i);
	}
}

void ImplementationPopObjectTest::oInitialise(float input)
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

int ImplementationPopObjectTest::sSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit->setScene(i);
		output += oSuccesses((float)i);
	}

	return output;
}

int ImplementationPopObjectTest::oSuccesses(float input)
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit->setObject(0);
		unit->popObject();

		renderQueue::Transform transform = unit->getTransform();
		bool success = true;

		if (transform.xpos != input + i)
		{
			success = false;
		}

		if (transform.ypos != input + i)
		{
			success = false;
		}

		if (transform.zpos != input + i)
		{
			success = false;
		}

		if (transform.xrot != input + i)
		{
			success = false;
		}

		if (transform.yrot != input + i)
		{
			success = false;
		}

		if (transform.zrot != input + i)
		{
			success = false;
		}

		if (transform.xscale != input + i)
		{
			success = false;
		}

		if (transform.yscale != input + i)
		{
			success = false;
		}

		if (transform.zscale != input + i)
		{
			success = false;
		}

		output += success;
	}

	return output;
}
