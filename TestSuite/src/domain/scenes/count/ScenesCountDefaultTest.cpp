#include "ScenesCountDefaultTest.h"

ScenesCountDefaultTest::ScenesCountDefaultTest()
{
}

ScenesCountDefaultTest::~ScenesCountDefaultTest()
{
}

std::string ScenesCountDefaultTest::test()
{
	if (!renderQueue::Scenes().getCount())
	{
		return std::string();
	}

	return "scenes count default test failed\n";
}
