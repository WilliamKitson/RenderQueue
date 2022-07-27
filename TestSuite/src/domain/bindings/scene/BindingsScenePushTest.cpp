#include "BindingsScenePushTest.h"

BindingsScenePushTest::BindingsScenePushTest()
	: itterations{ 4 }
{
}

BindingsScenePushTest::~BindingsScenePushTest()
{
}

std::string BindingsScenePushTest::test()
{
	renderQueue::Bindings unit;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(i);
	}

	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		successes += unit.getScene() == i;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "bindings scene push test failed\n";
}
