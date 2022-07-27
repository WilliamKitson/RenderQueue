#include "ObjectsIndexPopTest.h"

ObjectsIndexPopTest::ObjectsIndexPopTest()
	: unit()
{
}

ObjectsIndexPopTest::~ObjectsIndexPopTest()
{
}

std::string ObjectsIndexPopTest::test()
{
	initialise();

	unit.setIndex(3);
	unit.pop();

	if (success())
	{
		return std::string();
	}

	return "objects index pop test failed\n";
}

void ObjectsIndexPopTest::initialise()
{
	for (int i{ 0 }; i < 4; i++)
	{
		unit.push();

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

		unit.setIndex(i);
		unit.setTransform(transform);
	}
}

bool ObjectsIndexPopTest::success()
{
	if (unit.getXpos() != 0.0f)
	{
		return false;
	}

	if (unit.getYpos() != 0.0f)
	{
		return false;
	}

	if (unit.getZpos() != 0.0f)
	{
		return false;
	}

	if (unit.getXrot() != 0.0f)
	{
		return false;
	}

	if (unit.getYrot() != 0.0f)
	{
		return false;
	}

	if (unit.getZrot() != 0.0f)
	{
		return false;
	}

	if (unit.getXscale() != 0.0f)
	{
		return false;
	}

	if (unit.getYscale() != 0.0f)
	{
		return false;
	}

	if (unit.getZscale() != 0.0f)
	{
		return false;
	}

	return true;
}
