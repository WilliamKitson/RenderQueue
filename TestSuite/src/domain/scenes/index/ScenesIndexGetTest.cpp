#include "ScenesIndexGetTest.h"

ScenesIndexGetTest::ScenesIndexGetTest()
{
}

ScenesIndexGetTest::~ScenesIndexGetTest()
{
}

std::string ScenesIndexGetTest::test()
{
	renderQueue::Scenes unit;
	int itterations = 4;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}

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
