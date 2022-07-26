#include "ObjectsCountDefaultTest.h"

ObjectsCountDefaultTest::ObjectsCountDefaultTest()
{
}

ObjectsCountDefaultTest::~ObjectsCountDefaultTest()
{
}

std::string ObjectsCountDefaultTest::test()
{
	if (!RenderQueue::Objects().getCount())
	{
		return std::string();
	}

	return "objects count default test failed\n";
}
