#include "ImplementationOverlapTrueTest.h"

ImplementationOverlapTrueTest::ImplementationOverlapTrueTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationOverlapTrueTest::~ImplementationOverlapTrueTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationOverlapTrueTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "implementation overlap true test failed\n";
}

int ImplementationOverlapTrueTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);
		unit->setNoneoverlap();
		unit->setOverlap();
		output += unit->getOverlap() == true;
	}

	return output;
}
