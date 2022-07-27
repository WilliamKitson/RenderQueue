#include "BindingsSceneMinimumTest.h"

BindingsSceneMinimumTest::BindingsSceneMinimumTest()
{
}

BindingsSceneMinimumTest::~BindingsSceneMinimumTest()
{
}

std::string BindingsSceneMinimumTest::test()
{
	renderQueue::Bindings unit;
	unit.push(-1);

	if (!unit.getScene())
	{
		return std::string();
	}

	return "bindings scene minimum test failed\n";
}
