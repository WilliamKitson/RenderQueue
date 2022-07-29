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

	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		successes += unit.getIndex() == i;
	}

	if (successes == itterations)
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
