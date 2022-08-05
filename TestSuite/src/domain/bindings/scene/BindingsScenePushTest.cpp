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

	if (successes() == itterations)
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

int BindingsScenePushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += unit.getScene() == i;
	}

	return output;
}
