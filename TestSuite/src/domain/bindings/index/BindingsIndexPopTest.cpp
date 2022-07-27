#include "BindingsIndexPopTest.h"

BindingsIndexPopTest::BindingsIndexPopTest()
{
}

BindingsIndexPopTest::~BindingsIndexPopTest()
{
}

std::string BindingsIndexPopTest::test()
{
	renderQueue::Bindings unit;

	for (int i{ 0 }; i < 4; i++)
	{
		unit.push(i);
	}

	unit.setIndex(3);
	unit.pop();

	if (!unit.getScene())
	{
		return std::string();
	}

	return "bindings index pop test failed\n";
}
