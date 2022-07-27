#include "BindingsCountPopTest.h"

BindingsCountPopTest::BindingsCountPopTest()
	: unit(), itterations{ 4 }
{
}

BindingsCountPopTest::~BindingsCountPopTest()
{
}

std::string BindingsCountPopTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "bindings count pop test failed\n";
}

void BindingsCountPopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(int());
	}
}

int BindingsCountPopTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.pop();
		output += unit.getCount() == itterations - (i + 1);
	}

	return output;
}
