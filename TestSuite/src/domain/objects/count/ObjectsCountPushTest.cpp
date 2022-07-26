#include "ObjectsCountPushTest.h"

ObjectsCountPushTest::ObjectsCountPushTest()
	: itterations{ 4 }
{
}

ObjectsCountPushTest::~ObjectsCountPushTest()
{
}

std::string ObjectsCountPushTest::test()
{
	RenderQueue::Objects unit;

	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
		successes += unit.getCount() == i + 1;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "objects count push test failed\n";
}
