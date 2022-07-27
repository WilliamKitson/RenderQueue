#include "BindingsScenePopTest.h"

BindingsScenePopTest::BindingsScenePopTest()
	: unit(), itterations{ 4 }
{
}

BindingsScenePopTest::~BindingsScenePopTest()
{
}

std::string BindingsScenePopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "bindings scene pop test failed\n";
}

void BindingsScenePopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(i);
	}
}

int BindingsScenePopTest::successes()
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit.setIndex(0);
		unit.pop();
		output += unit.getScene() == i;
	}

	return output;
}
