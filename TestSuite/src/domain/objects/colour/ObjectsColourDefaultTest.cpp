#include "ObjectsColourDefaultTest.h"

ObjectsColourDefaultTest::ObjectsColourDefaultTest()
	: unit()
{
}

ObjectsColourDefaultTest::~ObjectsColourDefaultTest()
{
}

std::string ObjectsColourDefaultTest::test()
{
	unit.push();

	if (success())
	{
		return std::string();
	}

	return "objects colour default test failed\n";
}

bool ObjectsColourDefaultTest::success()
{
	if (unit.getRed() != 1.0f)
	{
		return false;
	}

	if (unit.getGreen() != 1.0f)
	{
		return false;
	}

	if (unit.getBlue() != 1.0f)
	{
		return false;
	}

	if (unit.getAlpha() != 1.0f)
	{
		return false;
	}

	return true;
}
