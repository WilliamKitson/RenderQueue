#include "ImplementationOverlapFalseTest.h"

ImplementationOverlapFalseTest::ImplementationOverlapFalseTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationOverlapFalseTest::~ImplementationOverlapFalseTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationOverlapFalseTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "implementation overlap false test failed\n";
}

int ImplementationOverlapFalseTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);
		unit->setNoneoverlap();
		output += unit->getOverlap() == false;
	}

	return output;
}
