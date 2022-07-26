#include "ObjectsCountPopTest.h"

ObjectsCountPopTest::ObjectsCountPopTest()
	: itterations{ 4 }
{
}

ObjectsCountPopTest::~ObjectsCountPopTest()
{
}

std::string ObjectsCountPopTest::test()
{
	RenderQueue::Objects unit;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
	}

	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.pop();
		successes += unit.getCount() == itterations - (i + 1);
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "objects count pop test failed\n";
}
