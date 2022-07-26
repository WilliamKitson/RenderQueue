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
