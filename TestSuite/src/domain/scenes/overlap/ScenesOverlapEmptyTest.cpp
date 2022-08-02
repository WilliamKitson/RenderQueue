#include "ScenesOverlapEmptyTest.h"

ScenesOverlapEmptyTest::ScenesOverlapEmptyTest()
{
}

ScenesOverlapEmptyTest::~ScenesOverlapEmptyTest()
{
}

std::string ScenesOverlapEmptyTest::test()
{
	renderQueue::Scenes unit;

	unit.setNoneoverlap();
	unit.setOverlap();

	if (!unit.getOverlap())
	{
		return std::string();
	}

	return "scenes overlap empty test failed\n";
}
