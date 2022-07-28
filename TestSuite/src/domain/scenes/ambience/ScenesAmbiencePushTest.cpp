#include "ScenesAmbiencePushTest.h"

ScenesAmbiencePushTest::ScenesAmbiencePushTest()
	: unit(), itterations{ 4 }
{
}

ScenesAmbiencePushTest::~ScenesAmbiencePushTest()
{
}

std::string ScenesAmbiencePushTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes ambience push test failed\n";
}

void ScenesAmbiencePushTest::initialise()
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

int ScenesAmbiencePushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += success((float)i);
	}

	return output;
}

bool ScenesAmbiencePushTest::success(float input)
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
