#include "ObjectsCountPushTest.h"

ObjectsCountPushTest::ObjectsCountPushTest()
	: unit(), itterations{ 4 }
{
}

ObjectsCountPushTest::~ObjectsCountPushTest()
{
}

std::string ObjectsCountPushTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "objects count push test failed\n";
}

int ObjectsCountPushTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
		output += unit.getCount() == i + 1;
	}

	return output;
}
