#include "DistanceCameraTest.h"

DistanceCameraTest::DistanceCameraTest()
{
}

DistanceCameraTest::~DistanceCameraTest()
{
}

std::string DistanceCameraTest::test()
{
	int itterations = 4;
	int successes = 0;

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

		float input = camera[0] + camera[1] + camera[2];
		float output = input;

		while ((output - input / output) > 0.000001f)
		{
			output = (output + input / output) / 2;
		}

		successes += unit.getDistance() == output;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "distance camera test failed\n";
}
