#include "ObjectsTransformEmptyTest.h"

ObjectsTransformEmptyTest::ObjectsTransformEmptyTest()
	: unit()
{
}

ObjectsTransformEmptyTest::~ObjectsTransformEmptyTest()
{
}

std::string ObjectsTransformEmptyTest::test()
{
	float transform[] = {
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	unit.setTransform(transform);

	if (success())
	{
		return std::string();
	}

	return "objects transform empty test failed\n";
}


bool ObjectsTransformEmptyTest::success()
{
	if (!position())
	{
		return false;
	}

	if (!rotation())
	{
		return false;
	}

	if (!scale())
	{
		return false;
	}

	return true;
}

bool ObjectsTransformEmptyTest::position()
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

bool ObjectsTransformEmptyTest::rotation()
{
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

	return true;
}

bool ObjectsTransformEmptyTest::scale()
{
	if (unit.getXscale())
	{
		return false;
	}

	if (unit.getYscale())
	{
		return false;
	}

	if (unit.getZscale())
	{
		return false;
	}

	return true;
}
