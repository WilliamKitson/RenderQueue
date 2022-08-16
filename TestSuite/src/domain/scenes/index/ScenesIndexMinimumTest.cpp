#include "ScenesIndexMinimumTest.h"

ScenesIndexMinimumTest::ScenesIndexMinimumTest()
	: unit()
{
}

ScenesIndexMinimumTest::~ScenesIndexMinimumTest()
{
}

std::string ScenesIndexMinimumTest::test()
{
	unit.push();
	unit.setIndex(-1);

	if (success())
	{
		return std::string();
	}

	return "scenes index minimum test failed\n";
}

bool ScenesIndexMinimumTest::success()
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
