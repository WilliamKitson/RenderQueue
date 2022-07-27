#include "BindingsCountMinimumTest.h"

BindingsCountMinimumTest::BindingsCountMinimumTest()
{
}

BindingsCountMinimumTest::~BindingsCountMinimumTest()
{
}

std::string BindingsCountMinimumTest::test()
{
	renderQueue::Bindings unit;
	unit.pop();

	if (!unit.getCount())
	{
		return std::string();
	}

	return "bindings count minimum test failed\n";
}
