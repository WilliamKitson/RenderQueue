#include "ElementsCountPushTest.h"

ElementsCountPushTest::ElementsCountPushTest()
	: unit{ 0 }, itterations{ 4 }
{
}

ElementsCountPushTest::~ElementsCountPushTest()
{
}

std::string ElementsCountPushTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "elements count push test failed\n";
}

int ElementsCountPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += unit.getCount() == i;
		unit.push();
	}

	return output;
}
