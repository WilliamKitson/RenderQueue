#include "ScenesAmbienceEmptyTest.h"

ScenesAmbienceEmptyTest::ScenesAmbienceEmptyTest()
	: unit()
{
}

ScenesAmbienceEmptyTest::~ScenesAmbienceEmptyTest()
{
}

std::string ScenesAmbienceEmptyTest::test()
{
	float ambience[] = {
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	unit.setAmbience(ambience);

	if (success())
	{
		return std::string();
	}

	return "scenes ambience empty test failed\n";
}

bool ScenesAmbienceEmptyTest::success()
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
