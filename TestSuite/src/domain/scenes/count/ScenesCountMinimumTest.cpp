#include "ScenesCountMinimumTest.h"

ScenesCountMinimumTest::ScenesCountMinimumTest()
{
}

ScenesCountMinimumTest::~ScenesCountMinimumTest()
{
}

std::string ScenesCountMinimumTest::test()
{
	renderQueue::Scenes unit;
	unit.pop();

	if (!unit.getCount())
	{
		return std::string();
	}

	return "scenes count minimum test failed\n";
}
