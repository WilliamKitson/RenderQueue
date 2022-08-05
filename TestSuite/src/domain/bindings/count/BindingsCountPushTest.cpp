#include "BindingsCountPushTest.h"

BindingsCountPushTest::BindingsCountPushTest()
	: unit(), itterations{ 4 }
{
}

BindingsCountPushTest::~BindingsCountPushTest()
{
}

std::string BindingsCountPushTest::test()
{
	initialise();

	if (unit.getCount() == itterations)
	{
		return std::string();
	}

	return "bindings count push test failed\n";
}

void BindingsCountPushTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(int());
	}
}
