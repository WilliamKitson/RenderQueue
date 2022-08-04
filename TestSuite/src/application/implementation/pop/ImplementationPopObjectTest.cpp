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
		output += success(input + (float)i);
	}

	return output;
}

bool ImplementationPopObjectTest::success(float input)
{
	if (unit->getTransform().xpos != input)
	{
		return false;
	}

	if (unit->getTransform().ypos != input)
	{
		return false;
	}

	if (unit->getTransform().zpos != input)
	{
		return false;
	}

	if (unit->getTransform().xrot != input)
	{
		return false;
	}

	if (unit->getTransform().yrot != input)
	{
		return false;
	}

	if (unit->getTransform().zrot != input)
	{
		return false;
	}

	if (unit->getTransform().xscale != input)
	{
		return false;
	}

	if (unit->getTransform().yscale != input)
	{
		return false;
	}

	if (unit->getTransform().zscale != input)
	{
		return false;
	}

	return true;
}
