#include "ElementsDataPushTest.h"

ElementsDataPushTest::ElementsDataPushTest()
	: resolution{ 4 }, unit{ resolution }
{
	push();
}

ElementsDataPushTest::~ElementsDataPushTest()
{
}

std::string ElementsDataPushTest::test()
{
	if (iSuccesses() == resolution * resolution)
	{
		return std::string();
	}

	return "elements data push test failed\n";
}

void ElementsDataPushTest::push()
{
	for (int i{ 0 }; i < resolution; i++)
	{
		unit.push();
		unit.setIndex(i);
		initialise(i);
	}
}

void ElementsDataPushTest::initialise(int input)
{
	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setElement(i);
		unit.setData((float)input + i);
	}
}

int ElementsDataPushTest::iSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setIndex(i);
		output += eSuccesses(i);
	}

	return output;
}

int ElementsDataPushTest::eSuccesses(int input)
{
	int output = 0;

	for (int i2{ 0 }; i2 < resolution; i2++)
	{
		unit.setElement(i2);
		output += unit.getData() == (float)input + i2;
	}

	return output;
}
