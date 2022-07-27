#include "ObjectsIndexMinimumTest.h"

ObjectsIndexMinimumTest::ObjectsIndexMinimumTest()
{
}

ObjectsIndexMinimumTest::~ObjectsIndexMinimumTest()
{
}

std::string ObjectsIndexMinimumTest::test()
{
	RenderQueue::Objects unit;

	unit.push();
	unit.setIndex(-1);

	bool success = true;

	if (unit.getXpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getYpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getZpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getXrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getYrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getZrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getXscale() != 1.0f)
	{
		success = false;
	}

	if (unit.getYscale() != 1.0f)
	{
		success = false;
	}

	if (unit.getZscale() != 1.0f)
	{
		success = false;
	}

	if (success)
	{
		return std::string();
	}

	return "objects index minimum test failed\n";
}
