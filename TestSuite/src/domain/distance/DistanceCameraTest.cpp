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
	float distanceX = input[0] - 0.0f;
	distanceX *= distanceX;

	float distanceY = input[1] - 0.0f;
	distanceY *= distanceY;

	float distanceZ = input[2] - 0.0f;
	distanceZ *= distanceZ;

	return root(distanceX + distanceY + distanceZ);
}

float DistanceCameraTest::root(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
