#include "ImplementationOverlapFalseTest.h"

ImplementationOverlapFalseTest::ImplementationOverlapFalseTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }, successes{ 0 }
{
}

ImplementationOverlapFalseTest::~ImplementationOverlapFalseTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationOverlapFalseTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);
		unit->setNoneoverlap();

		successes += unit->getOverlap() == false;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "implementation overlap false test failed\n";
}
