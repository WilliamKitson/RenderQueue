#include "ObjectsCountMinimumTest.h"

ObjectsCountMinimumTest::ObjectsCountMinimumTest()
{
}

ObjectsCountMinimumTest::~ObjectsCountMinimumTest()
{
}

std::string ObjectsCountMinimumTest::test()
{
	renderQueue::Objects unit;
	unit.pop();

	if (!unit.getCount())
	{
		return std::string();
	}

	return "objects count minimum test failed\n";
}
