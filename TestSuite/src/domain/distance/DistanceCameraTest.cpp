#include "DistanceCameraTest.h"

DistanceCameraTest::DistanceCameraTest()
	: itterations{ 4 }
{
}

DistanceCameraTest::~DistanceCameraTest()
{
}

std::string DistanceCameraTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "distance camera test failed\n";
}

int DistanceCameraTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float camera[] = {
			(float)i,
			(float)i,
			(float)i
		};

		renderQueue::Distance unit;

		unit.setCamera(camera);
		unit.calculate();

		output += unit.getDistance() == calculate(camera);
	}

	return output;
}

float DistanceCameraTest::calculate(float input[3])
{
	float distance = input[0] + input[1] + input[2];
	float output = distance;

	while ((output - distance / output) > 0.000001f)
	{
		output = (output + distance / output) / 2;
	}

	return output;
}
