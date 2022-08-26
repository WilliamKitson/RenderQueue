#include "ElementsDataDefaultTest.h"

ElementsDataDefaultTest::ElementsDataDefaultTest()
	: resolution{ 4 }, unit{ resolution }
{
	initialise();
}

ElementsDataDefaultTest::~ElementsDataDefaultTest()
{
}

std::string ElementsDataDefaultTest::test()
{
	if (iSuccesses() == resolution * resolution)
	{
		return std::string();
	}

	return "elements data default test failed\n";
}

void ElementsDataDefaultTest::initialise()
{
	for (int i{ 0 }; i < resolution; i++)
	{
		unit.push();
	}
}

int ElementsDataDefaultTest::iSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setIndex(i);
		output += eSuccesses();
	}

	return output;
}

int ElementsDataDefaultTest::eSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setElement(i);
		output += unit.getData() == 0.0f;
	}

	return output;
}
