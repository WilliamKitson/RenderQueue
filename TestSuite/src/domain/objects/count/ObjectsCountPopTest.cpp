#include "ObjectsCountPopTest.h"

ObjectsCountPopTest::ObjectsCountPopTest()
	: unit(), itterations{ 4 }
{
}

ObjectsCountPopTest::~ObjectsCountPopTest()
{
}

std::string ObjectsCountPopTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}

	if (successes() == itterations)
	{
		return std::string();
	}

	return "objects count pop test failed\n";
}

int ObjectsCountPopTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.pop();
		output += unit.getCount() == itterations - (i + 1);
	}

	return output;
}
