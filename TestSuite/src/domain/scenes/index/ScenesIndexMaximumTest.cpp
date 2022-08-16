#include "ScenesIndexMaximumTest.h"

ScenesIndexMaximumTest::ScenesIndexMaximumTest()
	: unit()
{
}

ScenesIndexMaximumTest::~ScenesIndexMaximumTest()
{
}

std::string ScenesIndexMaximumTest::test()
{
	unit.push();
	unit.setIndex(1);

	if (success())
	{
		return std::string();
	}

	return "scenes index maximum test failed\n";
}

bool ScenesIndexMaximumTest::success()
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
