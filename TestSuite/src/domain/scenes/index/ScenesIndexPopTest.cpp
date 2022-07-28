#include "ScenesIndexPopTest.h"

ScenesIndexPopTest::ScenesIndexPopTest()
	: unit()
{
}

ScenesIndexPopTest::~ScenesIndexPopTest()
{
}

std::string ScenesIndexPopTest::test()
{
	initialise();

	unit.setIndex(3);
	unit.pop();

	if (success())
	{
		return std::string();
	}

	return "scenes index pop test failed\n";
}

void ScenesIndexPopTest::initialise()
{
	for (int i{ 0 }; i < 4; i++)
	{
		unit.push();

		float camera[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.setIndex(i);
		unit.setCamera(camera);
	}
}

bool ScenesIndexPopTest::success()
{
	if (unit.getXpos() != 0.0f)
	{
		return false;
	}

	if (unit.getYpos() != 0.0f)
	{
		return false;
	}

	if (unit.getZpos() != 0.0f)
	{
		return false;
	}

	if (unit.getXrot() != 0.0f)
	{
		return false;
	}

	if (unit.getYrot() != 0.0f)
	{
		return false;
	}

	if (unit.getZrot() != 0.0f)
	{
		return false;
	}

	if (unit.getFrustum() != 0.0f)
	{
		return false;
	}

	return true;
}
