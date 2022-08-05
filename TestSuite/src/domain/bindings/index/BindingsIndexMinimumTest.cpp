#include "BindingsIndexMinimumTest.h"

BindingsIndexMinimumTest::BindingsIndexMinimumTest()
	: scene{ 1 }
{
}

BindingsIndexMinimumTest::~BindingsIndexMinimumTest()
{
}

std::string BindingsIndexMinimumTest::test()
{
	renderQueue::Bindings unit;

	unit.push(scene);
	unit.setIndex(-1);

	if (unit.getScene() == scene)
	{
		return std::string();
	}

	return "bindings index minimum test failed\n";
}
