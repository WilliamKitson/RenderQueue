#include "ObjectsColourEmptyTest.h"

ObjectsColourEmptyTest::ObjectsColourEmptyTest()
{
}

ObjectsColourEmptyTest::~ObjectsColourEmptyTest()
{
}

std::string ObjectsColourEmptyTest::test()
{
	RenderQueue::Objects unit;

	bool success = true;

	if (unit.getRed() != 0.0f)
	{
		success = false;
	}

	if (unit.getGreen() != 0.0f)
	{
		success = false;
	}

	if (unit.getBlue() != 0.0f)
	{
		success = false;
	}

	if (unit.getAlpha() != 0.0f)
	{
		success = false;
	}

	if (success)
	{
		return std::string();
	}

	return "objects colour empty test failed\n";
}
