#include "BindingsCountPushTest.h"

BindingsCountPushTest::BindingsCountPushTest()
	: itterations{ 4 }
{
}

BindingsCountPushTest::~BindingsCountPushTest()
{
}

std::string BindingsCountPushTest::test()
{
	renderQueue::Bindings unit;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push(int());
	}

	if (unit.getCount() == itterations)
	{
		return std::string();
	}

	return "bindings count push test failed\n";
}
