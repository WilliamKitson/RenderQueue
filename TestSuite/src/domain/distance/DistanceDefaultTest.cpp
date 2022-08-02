#include "DistanceDefaultTest.h"

DistanceDefaultTest::DistanceDefaultTest()
{
}

DistanceDefaultTest::~DistanceDefaultTest()
{
}

std::string DistanceDefaultTest::test()
{
	if (!renderQueue::Distance().getDistance())
	{
		return std::string();
	}

	return "distance defualt test failed\n";
}
