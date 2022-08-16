#include "ObjectsTransformDefaultTest.h"

ObjectsTransformDefaultTest::ObjectsTransformDefaultTest()
	: unit()
{
}

ObjectsTransformDefaultTest::~ObjectsTransformDefaultTest()
{
}

std::string ObjectsTransformDefaultTest::test()
{
	unit.push();

	if (success())
	{
		return std::string();
	}

	return "objects transform default test failed\n";
}

bool ObjectsTransformDefaultTest::success()
{
	if (!position())
	{
		return false;
	}

	if (unit.getXrot())
	{
		return false;
	}

	if (unit.getYrot())
	{
		return false;
	}

	if (unit.getZrot())
	{
		return false;
	}

	if (unit.getXscale() != 1.0f)
	{
		return false;
	}

	if (unit.getYscale() != 1.0f)
	{
		return false;
	}

	if (unit.getZscale() != 1.0f)
	{
		return false;
	}

	return true;
}

bool ObjectsTransformDefaultTest::position()
{
	if (unit.getXpos())
	{
		return false;
	}

	if (unit.getYpos())
	{
		return false;
	}

	if (unit.getZpos())
	{
		return false;
	}

	return true;
}
