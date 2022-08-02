#include "ScenesOverlapPushTest.h"

ScenesOverlapPushTest::ScenesOverlapPushTest()
	: unit(), itterations{ 4 }
{
}

ScenesOverlapPushTest::~ScenesOverlapPushTest()
{
}

std::string ScenesOverlapPushTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "scenes overlap push test failed\n";
}

void ScenesOverlapPushTest::initialise()
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

int ScenesOverlapPushTest::successes()
{
	int output = 0;
	bool toggle = false;

	for (int i{ 0 }; i < itterations; i++)
	{
		unit.setIndex(i);
		output += unit.getOverlap() == toggle;
		toggle = !toggle;
	}

	return output;
}
