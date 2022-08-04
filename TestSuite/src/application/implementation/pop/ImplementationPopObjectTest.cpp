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

			output += success;
		}
	}

	return output;
}
