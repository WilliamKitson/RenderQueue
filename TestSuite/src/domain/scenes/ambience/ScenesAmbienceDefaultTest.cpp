#include "ScenesAmbienceDefaultTest.h"

ScenesAmbienceDefaultTest::ScenesAmbienceDefaultTest()
	: unit()
{
}

ScenesAmbienceDefaultTest::~ScenesAmbienceDefaultTest()
{
}

std::string ScenesAmbienceDefaultTest::test()
{
	renderQueue::Scenes unit;
	unit.push();

	if (success())
	{
		return std::string();
	}

	return "scenes ambience default test failed\n";
}

bool ScenesAmbienceDefaultTest::success()
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
