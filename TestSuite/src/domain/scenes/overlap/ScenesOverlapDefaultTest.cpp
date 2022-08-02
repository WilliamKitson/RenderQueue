#include "ScenesOverlapDefaultTest.h"

ScenesOverlapDefaultTest::ScenesOverlapDefaultTest()
{
}

ScenesOverlapDefaultTest::~ScenesOverlapDefaultTest()
{
}

std::string ScenesOverlapDefaultTest::test()
{
	renderQueue::Scenes unit;
	unit.push();

	if (unit.getOverlap())
	{
		return std::string();
	}

	return "scenes overlap default test failed\n";
}
