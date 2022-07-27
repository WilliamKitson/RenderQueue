#include "ObjectsColourEmptyTest.h"

ObjectsColourEmptyTest::ObjectsColourEmptyTest()
	: unit()
{
}

ObjectsColourEmptyTest::~ObjectsColourEmptyTest()
{
}

std::string ObjectsColourEmptyTest::test()
{
	float colour[] = {
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	unit.setColour(colour);

	if (success())
	{
		return std::string();
	}

	return "objects colour empty test failed\n";
}

bool ObjectsColourEmptyTest::success()
{
	if (unit.getRed() != 0.0f)
	{
		return false;
	}

	if (unit.getGreen() != 0.0f)
	{
		return false;
	}

	if (unit.getBlue() != 0.0f)
	{
		return false;
	}

	if (unit.getAlpha() != 0.0f)
	{
		return false;
	}

	return true;
}
