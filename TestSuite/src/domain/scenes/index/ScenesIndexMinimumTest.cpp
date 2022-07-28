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
	if (unit.getXpos() != 0.0f)
	{
		return false;
	}

	if (unit.getYpos() != 0.0f)
	{
		return false;
	}

	if (unit.getZpos() != 0.0f)
	{
		return false;
	}

	if (unit.getXrot() != 0.0f)
	{
		return false;
	}

	if (unit.getYrot() != 0.0f)
	{
		return false;
	}

	if (unit.getZrot() != 0.0f)
	{
		return false;
	}

	if (unit.getFrustum() != 90.0f)
	{
		return false;
	}

	return true;
}
