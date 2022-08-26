#include "ElementsCountDefaultTest.h"

ElementsCountDefaultTest::ElementsCountDefaultTest()
{
}

ElementsCountDefaultTest::~ElementsCountDefaultTest()
{
}

std::string ElementsCountDefaultTest::test()
{
	if (!renderQueue::Elements(int()).getCount())
	{
		return std::string();
	}

	return "elements count default test failed\n";
}
