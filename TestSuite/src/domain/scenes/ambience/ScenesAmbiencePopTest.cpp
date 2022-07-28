#include "ScenesAmbiencePopTest.h"

ScenesAmbiencePopTest::ScenesAmbiencePopTest()
	: unit(), itterations{ 4 }
{
}

ScenesAmbiencePopTest::~ScenesAmbiencePopTest()
{
}

std::string ScenesAmbiencePopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "scenes ambience pop test failed\n";
}

void ScenesAmbiencePopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float ambience[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.push();
		unit.setIndex(i);
		unit.setAmbience(ambience);
	}
}

int ScenesAmbiencePopTest::successes()
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit.setIndex(0);
		unit.pop();
		output += success((float)i);
	}

	return output;
}

bool ScenesAmbiencePopTest::success(float input)
{
	if (unit.getRed() != input)
	{
		return false;
	}

	if (unit.getGreen() != input)
	{
		return false;
	}

	if (unit.getBlue() != input)
	{
		return false;
	}

	if (unit.getAlpha() != input)
	{
		return false;
	}

	return true;
}
