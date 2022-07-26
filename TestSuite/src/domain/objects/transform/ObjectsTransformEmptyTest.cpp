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
	if (success())
	{
		return std::string();
	}

	return "objects transform empty test failed\n";
}

bool ObjectsTransformEmptyTest::success()
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
