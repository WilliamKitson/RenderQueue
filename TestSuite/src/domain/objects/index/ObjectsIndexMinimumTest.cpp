#include "ObjectsIndexMinimumTest.h"

ObjectsIndexMinimumTest::ObjectsIndexMinimumTest()
	: unit()
{
}

ObjectsIndexMinimumTest::~ObjectsIndexMinimumTest()
{
}

std::string ObjectsIndexMinimumTest::test()
{
	unit.push();
	unit.setIndex(-1);

	if (success())
	{
		return std::string();
	}

	return "objects index minimum test failed\n";
}

bool ObjectsIndexMinimumTest::success()
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
