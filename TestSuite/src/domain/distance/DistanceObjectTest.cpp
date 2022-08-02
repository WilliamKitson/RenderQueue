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
	return root(unrooted(input));
}

float DistanceObjectTest::root(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float DistanceObjectTest::unrooted(float input[3])
{
	float distanceX = input[0] - 0.0f;
	distanceX *= distanceX;

	float distanceY = input[1] - 0.0f;
	distanceY *= distanceY;

	float distanceZ = input[2] - 0.0f;
	distanceZ *= distanceZ;

	return distanceX + distanceY + distanceZ;
}
