#include "ScenesAmbienceDefaultTest.h"

ScenesAmbienceDefaultTest::ScenesAmbienceDefaultTest()
{
}

ScenesAmbienceDefaultTest::~ScenesAmbienceDefaultTest()
{
}

std::string ScenesAmbienceDefaultTest::test()
{
	renderQueue::Scenes unit;
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

	return "scenes ambience default test failed\n";
}
