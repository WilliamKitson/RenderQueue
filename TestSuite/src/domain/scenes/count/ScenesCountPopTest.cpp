#include "ScenesCountPopTest.h"

ScenesCountPopTest::ScenesCountPopTest()
	: unit(), itterations{ 4 }
{
}

ScenesCountPopTest::~ScenesCountPopTest()
{
}

std::string ScenesCountPopTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes count pop test failed\n";
}

void ScenesCountPopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}
}

int ScenesCountPopTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.pop();
		output += unit.getCount() == itterations - (i + 1);
	}

	return output;
}
