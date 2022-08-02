#include "DistanceDefaultTest.h"

DistanceDefaultTest::DistanceDefaultTest()
{
}

DistanceDefaultTest::~DistanceDefaultTest()
{
}

std::string DistanceDefaultTest::test()
{
	renderQueue::Distance unit;
	unit.calculate();

	if (!unit.getDistance())
	{
		return std::string();
	}

	return "distance defualt test failed\n";
}
