#include "ScenesCountPushTest.h"

ScenesCountPushTest::ScenesCountPushTest()
	: unit(), itterations{ 4 }
{
}

ScenesCountPushTest::~ScenesCountPushTest()
{
}

std::string ScenesCountPushTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes count push test failed\n";
}

int ScenesCountPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
		output += unit.getCount() == i + 1;
	}

	return output;
}
