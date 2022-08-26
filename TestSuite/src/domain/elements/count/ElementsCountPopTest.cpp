#include "ElementsCountPopTest.h"

ElementsCountPopTest::ElementsCountPopTest()
	: unit{ 0 }, itterations{ 4 }
{
	initialise();
}

ElementsCountPopTest::~ElementsCountPopTest()
{
}

std::string ElementsCountPopTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "elements count pop test failed\n";
}

void ElementsCountPopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}
}

int ElementsCountPopTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += unit.getCount() == itterations - i;
		unit.pop();
	}

	return output;
}
