#include "ScenesIndexGetTest.h"

ScenesIndexGetTest::ScenesIndexGetTest()
	: unit(), itterations{ 4 }
{
}

ScenesIndexGetTest::~ScenesIndexGetTest()
{
}

std::string ScenesIndexGetTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes index get test failed\n";
}

void ScenesIndexGetTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}
}

int ScenesIndexGetTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += unit.getIndex() == i;
	}

	return output;
}
