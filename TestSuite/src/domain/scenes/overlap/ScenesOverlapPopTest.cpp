#include "ScenesOverlapPopTest.h"

ScenesOverlapPopTest::ScenesOverlapPopTest()
	: unit(), itterations{ 4 }
{
}

ScenesOverlapPopTest::~ScenesOverlapPopTest()
{
}

std::string ScenesOverlapPopTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "scenes overlap pop test failed\n";
}

void ScenesOverlapPopTest::initialise()
{
	bool toggle = false;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
		unit.setIndex(i);
		unit.setNoneoverlap();

		if (toggle)
		{
			unit.setOverlap();
		}

		toggle = !toggle;
	}
}

int ScenesOverlapPopTest::successes()
{
	int output = 0;
	bool toggle = true;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		unit.pop();

		output += unit.getOverlap() == toggle;
		toggle = !toggle;
	}

	return output;
}
