#include "BindingsIndexPopTest.h"

BindingsIndexPopTest::BindingsIndexPopTest()
	: unit()
{
}

BindingsIndexPopTest::~BindingsIndexPopTest()
{
}

std::string BindingsIndexPopTest::test()
{
	initialise();

	unit.setIndex(3);
	unit.pop();

	if (!unit.getScene())
	{
		return std::string();
	}

	return "bindings index pop test failed\n";
}

void BindingsIndexPopTest::initialise()
{
	for (int i{ 0 }; i < 4; i++)
	{
		unit.push(i);
	}
}
