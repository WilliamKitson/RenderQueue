#include "ElementsCountMinimumTest.h"

ElementsCountMinimumTest::ElementsCountMinimumTest()
{
}

ElementsCountMinimumTest::~ElementsCountMinimumTest()
{
}

std::string ElementsCountMinimumTest::test()
{
	renderQueue::Elements unit{ int() };
	unit.pop();

	if (!unit.getCount())
	{
		return std::string();
	}

	return "elements count minimum test failed\n";
}
