#include "ScenesIndexPopTest.h"

ScenesIndexPopTest::ScenesIndexPopTest()
	: unit()
{
	initialise();
}

ScenesIndexPopTest::~ScenesIndexPopTest()
{
}

std::string ScenesIndexPopTest::test()
{
	unit.setIndex(3);
	unit.pop();

	if (success())
	{
		return std::string();
	}

	return "scenes index pop test failed\n";
}

void ScenesIndexPopTest::initialise()
{
	for (int i{ 0 }; i < 4; i++)
	{
		unit.push();

		float ambience[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.setIndex(i);
		unit.setAmbience(ambience);
	}
}

bool ScenesIndexPopTest::success()
{
	if (unit.getRed())
	{
		return false;
	}

	if (unit.getGreen())
	{
		return false;
	}

	if (unit.getBlue())
	{
		return false;
	}

	if (unit.getAlpha())
	{
		return false;
	}

	return true;
}
