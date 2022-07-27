#include "BindingsScenePushTest.h"

BindingsScenePushTest::BindingsScenePushTest()
	: unit(), itterations{ 4 }
{
}

BindingsScenePushTest::~BindingsScenePushTest()
{
}

std::string BindingsScenePushTest::test()
{
	initialise();

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

void BindingsScenePushTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(i);
	}
}
