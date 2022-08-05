#include "BindingsIndexMaximumTest.h"

BindingsIndexMaximumTest::BindingsIndexMaximumTest()
	: scene{ 1 }
{
}

BindingsIndexMaximumTest::~BindingsIndexMaximumTest()
{
}

std::string BindingsIndexMaximumTest::test()
{
	renderQueue::Bindings unit;

	unit.push(scene);
	unit.setIndex(1);

	if (unit.getScene() == scene)
	{
		return std::string();
	}

	return "bindings index maximum test failed\n";
}
