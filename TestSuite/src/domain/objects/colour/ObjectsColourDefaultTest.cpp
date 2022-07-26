#include "ObjectsColourDefaultTest.h"

ObjectsColourDefaultTest::ObjectsColourDefaultTest()
{
}

ObjectsColourDefaultTest::~ObjectsColourDefaultTest()
{
}

std::string ObjectsColourDefaultTest::test()
{
	RenderQueue::Objects unit;
	unit.push();

	bool success = true;

	if (unit.getRed() != 1.0f)
	{
		success = false;
	}

	if (unit.getGreen() != 1.0f)
	{
		success = false;
	}

	if (unit.getBlue() != 1.0f)
	{
		success = false;
	}

	if (unit.getAlpha() != 1.0f)
	{
		success = false;
	}

	if (success)
	{
		return std::string();
	}

	return "objects colour default test failed\n";
}
