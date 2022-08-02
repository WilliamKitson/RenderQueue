#include "DistanceObjectTest.h"

DistanceObjectTest::DistanceObjectTest()
	: itterations{ 4 }
{
}

DistanceObjectTest::~DistanceObjectTest()
{
}

std::string DistanceObjectTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "distance object test failed\n";
}

int DistanceObjectTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float object[] = {
			(float)i,
			(float)i,
			(float)i
		};

		renderQueue::Distance unit;

		unit.setObject(object);
		unit.calculate();

		output += unit.getDistance() == calculate(object);
	}

	return output;
}

float DistanceObjectTest::calculate(float input[3])
{
	float distanceX = 0.0f - input[0];
	distanceX *= distanceX;

	float distanceY = 0.0f - input[1];
	distanceY *= distanceY;

	float distanceZ = 0.0f - input[2];
	distanceZ *= distanceZ;

	float distance = distanceX + distanceY + distanceZ;
	float output = distance;

	while ((output - distance / output) > 0.000001f)
	{
		output = (output + distance / output) / 2;
	}

	return output;
}
